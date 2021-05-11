#include "task-window.h"
#include "ui_task-window.h"

TaskWindow::TaskWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TaskWindow)
{
    ui->setupUi(this);


    freopen("C:/theboatman/Coding/Unik/Labs/C++/OAIP/Fifth/Task/data.txt", "r", stdin);

    std::string str;
    while(getline(std::cin, str)) {
        list.append(list.size(), (QString::fromStdString(str)));

    }


    renderListBox();

}

TaskWindow::~TaskWindow()
{
    delete ui;
}

void TaskWindow::renderListBox() {
    ui->listBox->clear();
    for(int i = 0; i < list.size(); i++) {
        ui->listBox->addItem(list[i]);
    }
}

void TaskWindow::on_listBox_itemClicked(QListWidgetItem *item) {
    qDebug() << item->text() << "\n";

    if (moveMode) {
        listToMove.append(listToMove.size(), item->text());
        int row = ui->listBox->indexFromItem(item).row();
        list.remove(row);

        ui->listBox->removeItemWidget(item);

        QString text = ui->moveItemList->text();
        text += item->text() + "\n";

        delete item;

        ui->moveItemList->setText(text);
    }
    else if (pushMode){
        int row = ui->listBox->indexFromItem(item).row();

        for(int i = 0; i < listToMove.size(); i++) {
            list.append(row, listToMove[listToMove.size() - i - 1]);
        }

        listToMove.clear();

        QString text = QString("Mode: ") + "disable";

        pushMode = false;
        ui->pushModeLabel->setText(text);

        renderListBox();

        ui->moveItemList->setText(QString(""));
    }
}

void TaskWindow::on_moveModeButton_clicked() {
    moveMode = true;
    listToMove.clear();

    QString text = QString("Mode: ") + "active";
    ui->moveModeLabel->setText(text);
}

void TaskWindow::on_pushModeButton_clicked() {
    moveMode = false;
    QString text = QString("Mode: ") + "disable";
    ui->moveModeLabel->setText(text);

    pushMode = true;
    text = QString("Mode: ") + "active";
    ui->pushModeLabel->setText(text);

}
