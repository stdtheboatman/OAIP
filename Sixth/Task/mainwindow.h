#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QMessageBox>

#include "tree-lab.h"

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
    void on_addButton_clicked();

    void on_getButton_clicked();

    void on_deleteButton_clicked();

    void on_dfsButton_clicked();

private:
    void messageBox(QString title, QString text);
    void render();
private:
    Ui::MainWindow *ui;

    TreeLab<QString> tree;
};
#endif // MAINWINDOW_H
