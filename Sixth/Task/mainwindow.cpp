#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    render();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addButton_clicked() {
    QString value = ui->addValueInput->text();
    int key = ui->addKeyInput->text().toInt();


    try {
        tree.insert(value, key);
    }  catch (int error) {
        messageBox("failed", "tree already have this key");
    }

    render();
}

void MainWindow::messageBox(QString title, QString text){
    QMessageBox msgBox;
    msgBox.setWindowTitle(title);
    msgBox.setText(text);
    msgBox.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    msgBox.exec();
}

void MainWindow::render() {
    ui->treeWidget->clear();

    ui->countNodeOutput->setText(QString::number(tree.getNodeCountFromLeftSubTree()));

    ui->treeWidget->setColumnCount(1);
    ui->treeWidget->setHeaderLabel("Tree");

    QTreeWidgetItem *root = new QTreeWidgetItem;

    tree.outputToTreeView(root);

    ui->treeWidget->addTopLevelItem(root);

}

void MainWindow::on_getButton_clicked() {
    int key = ui->getKeyInput->text().toInt();

    QString result;
    try {
       result = tree.getValue(key);
    }  catch (int error) {
       messageBox("failed", "tree doesn`t have this key");
       return;
    }

    messageBox("successful", result);

    render();
}

void MainWindow::on_deleteButton_clicked() {
    int key = ui->deleteKeyInput->text().toInt();


    try {
        tree.remove(key);
    }  catch (int error) {
        messageBox("failed", "tree doesn`t have this key");
    }

    render();
}

void MainWindow::on_dfsButton_clicked() {
    List<QString> list;

    tree.outputSort(&list);

    QString text;
    for(int i = 0; i < list.size(); i++) {
        text += list[i];
        text += " ";
    }

    ui->dfs1Output->setText(text);

    text = "";
    list.clear();

    tree.outputReverseSort(&list);
    for(int i = 0; i < list.size(); i++) {
        text += list[i];
        text += " ";
    }

    ui->dfs2Output->setText(text);

    text = "";
    list.clear();

    tree.outputZXC(&list);
    for(int i = 0; i < list.size(); i++) {
        text += list[i];
        text += " ";
    }

    ui->dfs3Output->setText(text);

}
