#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "messageboxandinputcontrol.h"

#include "mylist.h"

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

    if (!name.size()) {
        MessageBoxAndInputControl::showMessage("failed", QString("%1 can`t be empty").arg("Name"));
        return;
    }

    if (!address.size()) {
        MessageBoxAndInputControl::showMessage("failed", QString("%1 can`t be empty").arg("Address"));
        return;
    }

    if (!date.size()) {
        MessageBoxAndInputControl::showMessage("failed", QString("%1 can`t be empty").arg("Date"));
        return;
    }

    if (activeOrderList.addUniq(Order(name, address, date, status))) {
        renderActiveOrderTable();
    }
    else {
        MessageBoxAndInputControl::showMessage("failed", "arleady active orders list have same order");
    }

}

void MainWindow::on_orderDeleteButton_clicked() {
    bool *flag = new bool(false);
    int id = ui->orderIdToDeletInput->text().toInt(flag);

    if (*flag == false) {
        MessageBoxAndInputControl::showMessage("failed", QString("%1 must be integer").arg("Id"));
        return;
    }

    delete flag;

    int index = activeOrderList.getOrderIndexById(id);

    if (index == -1) {
        index = doneOrderList.getOrderIndexById(id);

        int x = 3;

        try {
           qDebug() << "try delte\n";
           x++;

           doneOrderList.del(index);

           qDebug() << "Some text\n";
        }  catch (QString f) {

            qDebug() << "I catch throw\n";
            qDebug() << "Error message" << f << "\n";
            MessageBoxAndInputControl::showMessage("failed", QString("can`t find any order with id: %1").arg(id));
        }

        qDebug() << x << "\n";



    }
    else {
        if (activeOrderList.del(index)) {
            renderActiveOrderTable();
        }
        else {
            MessageBoxAndInputControl::showMessage("failed", QString("can`t find any order with id: %1").arg(id));
        }
    }

}

void MainWindow::on_orderDoButton_clicked() {
    bool *flag = new bool(false);
    int id = ui->orderIdToDoInput->text().toInt(flag);

    if (*flag == false) {
        MessageBoxAndInputControl::showMessage("failed", QString("%1 must be integer").arg("Id"));
        return;
    }

    delete flag;

    int index = activeOrderList.getOrderIndexById(id);

    if (index != -1) {
        Order order = activeOrderList.getOderByIndex(index);
        order.setStatus("Done");

        doneOrderList.add(order);
        activeOrderList.del(index);

        renderActiveOrderTable();
        renderDoneOrderTable();
    }
    else {
        MessageBoxAndInputControl::showMessage("failed", QString("can`t find any order active with id: %1").arg(id));
    }
}

void MainWindow::on_orderGetByIdButton_clicked() {
    int id = ui->orderIdToGetInput->text().toInt();

    int index = activeOrderList.getOrderIndexById(id);
    if (index == -1) {
        index = doneOrderList.getOrderIndexById(id);

        if (index != -1) {
            MessageBoxAndInputControl::showMessage("ok", doneOrderList.getOderByIndex(index).toString());
        }
        else {
            MessageBoxAndInputControl::showMessage("failed", QString("can`t find any order with id: %1").arg(id));
        }
    }
    else {
         MessageBoxAndInputControl::showMessage("ok", activeOrderList.getOderByIndex(index).toString());
    }
}

void MainWindow::on_ordersGetByDateButton_clicked() {
    QString date = ui->orderDateToGetInput->text();

    MyList<int> listActive = activeOrderList.getOrderIndexesByDate(date);
    MyList<int> listDone = doneOrderList.getOrderIndexesByDate(date);

    if (listActive.size() + listDone.size() > 0) {
        QString result = "";
        for(int i = 0; i < listActive.size(); i++) {
            result += activeOrderList.getOderByIndex(listActive[i]).toString();
            result += "\n";
        }

        for(int i = 0; i < listDone.size(); i++) {
            result += doneOrderList.getOderByIndex(listDone[i]).toString();
            result += "\n";
        }

           MessageBoxAndInputControl::showMessage("ok", result);
    }
    else {
        MessageBoxAndInputControl::showMessage("failed", QString("can`t find any order with date: %1").arg(date));
    }
}
