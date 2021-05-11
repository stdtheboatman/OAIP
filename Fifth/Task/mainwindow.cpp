#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_testQueueButton_clicked() {
    TestQueueWindow *window = new TestQueueWindow();
    window->show();
}

void MainWindow::on_TaskButton_clicked() {
    TaskWindow *window = new TaskWindow();
    window->show();
}
