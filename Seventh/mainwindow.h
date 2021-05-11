#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "hash-table.h"

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

    void on_deleteButtot_clicked();

    void on_findButton_clicked();

    void on_deleteButtot_2_clicked();

private:
    void showMessage(const QString &title, const QString &text) {
        QMessageBox msgBox;

        msgBox.setWindowTitle(title);
        msgBox.setText(text);
        msgBox.exec();
    }

    void renderHashTableOutput();

private:
    Ui::MainWindow *ui;
    HashTable<QString> hashTable;
};
#endif // MAINWINDOW_H
