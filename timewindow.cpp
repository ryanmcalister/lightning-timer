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

    setSource(QUrl("qrc:/main.qml"));

    setGeometry(QStyle::alignedRect(
                    Qt::RightToLeft,
                    Qt::AlignTop,
                    size(),
                    qApp->desktop()->availableGeometry()));
}

TimeWindow::~TimeWindow()
{

}

