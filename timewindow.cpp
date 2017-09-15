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
    // set the window to be transparent and not accecpt click events
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowTransparentForInput | Qt::WindowStaysOnTopHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setClearColor(Qt::transparent);

    // set the scale factor for level-2 dpi-awareness
    engine()->rootContext()->setContextProperty("scaleFactor", qApp->screens()[0]->logicalDotsPerInch() / 96.0);

    setSource(QUrl("qrc:/main.qml"));

    // move the window to the top-left area of the screen
    setGeometry(QStyle::alignedRect(
                    Qt::RightToLeft,
                    Qt::AlignTop,
                    size(),
                    qApp->desktop()->availableGeometry()));
}

TimeWindow::~TimeWindow()
{

}

