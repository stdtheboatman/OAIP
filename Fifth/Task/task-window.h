#ifndef TASKWINDOW_H
#define TASKWINDOW_H

#include <QDialog>
#include "list.h"
#include <QListWidget>

#include <stdio.h>
#include <string>
#include <iostream>


namespace Ui {
class TaskWindow;
}

class TaskWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TaskWindow(QWidget *parent = nullptr);
    ~TaskWindow();

    void renderListBox();
private slots:
    void on_listBox_itemClicked(QListWidgetItem *item);

    void on_moveModeButton_clicked();

    void on_pushModeButton_clicked();

private:
    List<QString> list;
    List<int> listToMoveIndex;
    List<QString> listToMove;

    Ui::TaskWindow *ui;

    bool moveMode = false;
    bool pushMode = false;
};

#endif // TASKWINDOW_H
