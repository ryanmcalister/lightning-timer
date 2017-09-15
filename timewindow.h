#ifndef TIMEWINDOW_H
#define TIMEWINDOW_H

#include <QQuickWidget>

class TimeWindow : public QQuickWidget
{
    Q_OBJECT

public:
    TimeWindow(QWidget *parent = 0);
    ~TimeWindow();

private:
    void alignWindow(const QSize &newSize);

};

#endif // TIMEWINDOW_H
