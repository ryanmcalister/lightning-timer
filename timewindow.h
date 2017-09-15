#ifndef TIMEWINDOW_H
#define TIMEWINDOW_H

#include <QQuickWidget>

class TimeWindow : public QQuickWidget
{
    Q_OBJECT

public:
    TimeWindow(QWidget *parent = 0);
    ~TimeWindow();

};

#endif // TIMEWINDOW_H
