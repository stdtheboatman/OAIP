#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::renderActiveOrderTable() {
    ui->activeOrderTable->setText(activeOrderList.toString());
}

void MainWindow::renderDoneOrderTable() {
    ui->doneOrderTable->setText(doneOrderList.toString());
}

void MainWindow::on_orderAddButton_clicked() {
    QString name = ui->orderNameInput->text();
    QString address = ui->orderAddressInput->text();
    QString date = ui->orderDateInput->text();
    QString status = "Active";

    activeOrderList.addUniq(Order(name, address, date, status));

    renderActiveOrderTable();
}

void MainWindow::on_orderDeleteButton_clicked() {
    int id = ui->orderIdToDeletInput->text().toInt();

    int index = activeOrderList.getOrderIndexById(id);

    if (index == -1) {
        qDebug() << "ZXC?\n";

        index = doneOrderList.getOrderIndexById(id);

        qDebug() << index;

        doneOrderList.del(index);
        renderDoneOrderTable();
    }
    else {
        activeOrderList.del(index);
        renderActiveOrderTable();
    }

}

void MainWindow::on_orderDoButton_clicked() {
    int id = ui->orderIdToDoInput->text().toInt();

    int index = activeOrderList.getOrderIndexById(id);

    if (index != -1) {
        Order order = activeOrderList.getOderByIndex(index);
        order.setStatus("Done");

        doneOrderList.add(order);
        activeOrderList.del(index);

        renderActiveOrderTable();
        renderDoneOrderTable();
    }
}
