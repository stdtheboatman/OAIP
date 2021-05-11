#ifndef TESTQUEUEWINDOW_H
#define TESTQUEUEWINDOW_H

#include <QDialog>
#include "queue.h"

namespace Ui {
class TestQueueWindow;
}

class TestQueueWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TestQueueWindow(QWidget *parent = nullptr);
    ~TestQueueWindow();

private slots:
    void on_queuePushButton_clicked();

    void on_queueViewTopButton_clicked();

    void on_queuePopButton_clicked();

    void on_queueIsEmptyButton_clicked();

public:
    void renderQueueOutput();

private:
    Ui::TestQueueWindow *ui;
    Queue queue;
};

#endif // TESTQUEUEWINDOW_H
