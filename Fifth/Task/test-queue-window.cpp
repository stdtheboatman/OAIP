#include "test-queue-window.h"
#include "ui_test-queue-window.h"

TestQueueWindow::TestQueueWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestQueueWindow)
{
    ui->setupUi(this);
}

TestQueueWindow::~TestQueueWindow()
{
    delete ui;
}

void TestQueueWindow::on_queuePushButton_clicked() {
    int value = ui->queuePushValueInput->text().toInt();

    queue.push(value);

    renderQueueOutput();
}

void TestQueueWindow::renderQueueOutput() {
    ui->queueOutput->setText(queue.toString());
}

void TestQueueWindow::on_queueViewTopButton_clicked() {
    if (queue.isEmpty()) {
        return;
    }

    int value = queue.top();

    ui->queueViewTopResulOutput->setText(QString::number(value));
}

void TestQueueWindow::on_queuePopButton_clicked() {
    if (queue.isEmpty()) {
        return;
    }

    queue.pop();
    renderQueueOutput();
}

void TestQueueWindow::on_queueIsEmptyButton_clicked() {
    bool result = queue.isEmpty();

    QString resultText = (result ? "true" : "false");
    ui->queueIsEmptyResultOutput->setText(resultText);
}
