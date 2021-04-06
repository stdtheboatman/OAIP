#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "list.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void renderActiveOrderTable();
    void renderDoneOrderTable();
private slots:
    void on_orderAddButton_clicked();

    void on_orderDeleteButton_clicked();

    void on_orderDoButton_clicked();

private:
    Ui::MainWindow *ui;

    List activeOrderList;
    List doneOrderList;
};
#endif // MAINWINDOW_H
