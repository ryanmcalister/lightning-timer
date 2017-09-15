#include "timewindow.h"
#include <QRegion>
#include <QQmlContext>
#include <QQmlEngine>
#include <QStyle>
#include <QApplication>
#include <QDesktopWidget>
#include <QScreen>

TimeWindow::TimeWindow(QWidget *parent)
    : QQuickWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowTransparentForInput | Qt::WindowStaysOnTopHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setClearColor(Qt::transparent);

    engine()->rootContext()->setContextProperty("timeWindow", this);
    engine()->rootContext()->setContextProperty("scaleFactor", qApp->screens()[0]->logicalDotsPerInch() / 96.0);

    setSource(QUrl("qrc:/main.qml"));
    alignWindow(size());
}

TimeWindow::~TimeWindow()
{

}

void TimeWindow::alignWindow(const QSize &newSize)
{
    setGeometry(QStyle::alignedRect(
                    Qt::RightToLeft,
                    Qt::AlignTop,
                    newSize,
                    qApp->desktop()->availableGeometry()));
}
