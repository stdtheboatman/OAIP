#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    renderHashTableOutput();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addButton_clicked() {
    bool *convertToInt = new bool(false);

    int key = ui->addKeyInput->text().toInt(convertToInt);

    if (*convertToInt == false) {
        showMessage("Add error", "Key must be integer value");
        return;
    }

    QString value = ui->addValueInput->text();

    hashTable.insert(key, value);

    renderHashTableOutput();
}

void MainWindow::renderHashTableOutput() {
    QString text;
    int index = 0;
    for(auto table : hashTable.getHashTable()) {
        text += QString::number(index) + ": ";

        for(auto hash : table) {
            text += "(" + QString::number(hash.first) + ", " + hash.second + ") ";
        }
        text += "\n";

        index++;
    }

    ui->hashTableOutput->setText(text);
}

void MainWindow::on_deleteButtot_clicked() {
    bool *convertToInt = new bool(false);

    int key = ui->deleteKeyInput->text().toInt(convertToInt);

    if (*convertToInt == false) {
        showMessage("Delete error", "Key must be integer value");
        return;
    }

    hashTable.remove(key);
    renderHashTableOutput();
}

void MainWindow::on_findButton_clicked() {
    bool *convertToInt = new bool(false);

    int key = ui->findKeyInput->text().toInt(convertToInt);

    if (*convertToInt == false) {
        showMessage("Find error", "Key must be integer value");
        return;
    }

    if (hashTable.find(key)) {
        ui->findResultOutput->setText(hashTable.get(key));
    }
    else {
        ui->findResultOutput->setText("can`t find");
    }

    renderHashTableOutput();

}

void MainWindow::on_deleteButtot_2_clicked() {
    bool *convertToInt = new bool(false);

    int keyLeft = ui->deleteFromKeyLeftInput->text().toInt(convertToInt);

    if (*convertToInt == false) {
        showMessage("Delete error", "KeyLeft must be integer value");
        return;
    }

    int keyRight = ui->deleteToKeyRightInput->text().toInt(convertToInt);

    if (*convertToInt == false) {
        showMessage("Delete error", "KeyRight must be integer value");
        return;
    }

    for(auto table : hashTable.getHashTable()) {
        for(auto hash : table) {
            if (hash.first >= keyLeft && hash.first <= keyRight) {
                hashTable.remove(hash.first);
            }
        }
    }

    renderHashTableOutput();
}
