#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "test-queue-window.h"
#include "task-window.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_testQueueButton_clicked();

    void on_TaskButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
