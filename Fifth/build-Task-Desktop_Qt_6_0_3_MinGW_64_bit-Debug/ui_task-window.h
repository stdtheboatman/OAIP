/********************************************************************************
** Form generated from reading UI file 'task-window.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_2D_WINDOW_H
#define UI_TASK_2D_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TaskWindow
{
public:
    QListWidget *listBox;
    QPushButton *moveModeButton;
    QLabel *moveModeLabel;
    QPushButton *pushModeButton;
    QLabel *pushModeLabel;
    QLabel *label;
    QLabel *moveItemList;

    void setupUi(QDialog *TaskWindow)
    {
        if (TaskWindow->objectName().isEmpty())
            TaskWindow->setObjectName(QString::fromUtf8("TaskWindow"));
        TaskWindow->resize(705, 538);
        listBox = new QListWidget(TaskWindow);
        listBox->setObjectName(QString::fromUtf8("listBox"));
        listBox->setGeometry(QRect(70, 40, 291, 241));
        listBox->setMovement(QListView::Static);
        moveModeButton = new QPushButton(TaskWindow);
        moveModeButton->setObjectName(QString::fromUtf8("moveModeButton"));
        moveModeButton->setGeometry(QRect(450, 40, 101, 41));
        moveModeLabel = new QLabel(TaskWindow);
        moveModeLabel->setObjectName(QString::fromUtf8("moveModeLabel"));
        moveModeLabel->setGeometry(QRect(454, 10, 91, 20));
        pushModeButton = new QPushButton(TaskWindow);
        pushModeButton->setObjectName(QString::fromUtf8("pushModeButton"));
        pushModeButton->setGeometry(QRect(446, 140, 101, 41));
        pushModeLabel = new QLabel(TaskWindow);
        pushModeLabel->setObjectName(QString::fromUtf8("pushModeLabel"));
        pushModeLabel->setGeometry(QRect(450, 110, 91, 20));
        label = new QLabel(TaskWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(610, 10, 55, 16));
        moveItemList = new QLabel(TaskWindow);
        moveItemList->setObjectName(QString::fromUtf8("moveItemList"));
        moveItemList->setGeometry(QRect(600, 50, 81, 101));

        retranslateUi(TaskWindow);

        QMetaObject::connectSlotsByName(TaskWindow);
    } // setupUi

    void retranslateUi(QDialog *TaskWindow)
    {
        TaskWindow->setWindowTitle(QCoreApplication::translate("TaskWindow", "Dialog", nullptr));
        moveModeButton->setText(QCoreApplication::translate("TaskWindow", "Move mode", nullptr));
        moveModeLabel->setText(QCoreApplication::translate("TaskWindow", "Mode: disable", nullptr));
        pushModeButton->setText(QCoreApplication::translate("TaskWindow", "Push mode", nullptr));
        pushModeLabel->setText(QCoreApplication::translate("TaskWindow", "Mode: disable", nullptr));
        label->setText(QCoreApplication::translate("TaskWindow", "To move", nullptr));
        moveItemList->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TaskWindow: public Ui_TaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_2D_WINDOW_H
