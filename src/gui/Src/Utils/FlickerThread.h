#pragma once

#include <QThread>
#include <QWidget>

class FlickerThread : public QThread
{
    Q_OBJECT
public:
    explicit FlickerThread(QWidget* widget, QObject* parent = nullptr);
    void setProperties(int count = 3, int width = 2, int delay = 300);

signals:
    void setStyleSheet(QString style);

private:
    void run();
    QWidget* mWidget;
    int count;
    int width;
    int delay;
};
