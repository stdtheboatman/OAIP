/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *hashTableOutput;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *addValueInput;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *addKeyInput;
    QPushButton *addButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *deleteButtot;
    QLabel *label_3;
    QLineEdit *deleteKeyInput;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLineEdit *findKeyInput;
    QLabel *label_5;
    QLineEdit *findResultOutput;
    QPushButton *findButton;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLineEdit *deleteToKeyRightInput;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *deleteFromKeyLeftInput;
    QPushButton *deleteButtot_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hashTableOutput = new QTextEdit(centralwidget);
        hashTableOutput->setObjectName(QString::fromUtf8("hashTableOutput"));
        hashTableOutput->setGeometry(QRect(510, 20, 281, 461));
        hashTableOutput->setReadOnly(true);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 20, 211, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addValueInput = new QLineEdit(gridLayoutWidget);
        addValueInput->setObjectName(QString::fromUtf8("addValueInput"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addValueInput->sizePolicy().hasHeightForWidth());
        addValueInput->setSizePolicy(sizePolicy);

        gridLayout->addWidget(addValueInput, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        addKeyInput = new QLineEdit(gridLayoutWidget);
        addKeyInput->setObjectName(QString::fromUtf8("addKeyInput"));
        sizePolicy.setHeightForWidth(addKeyInput->sizePolicy().hasHeightForWidth());
        addKeyInput->setSizePolicy(sizePolicy);

        gridLayout->addWidget(addKeyInput, 1, 0, 1, 1);

        addButton = new QPushButton(gridLayoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(addButton, 2, 0, 1, 2);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(270, 20, 211, 141));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        deleteButtot = new QPushButton(gridLayoutWidget_2);
        deleteButtot->setObjectName(QString::fromUtf8("deleteButtot"));
        sizePolicy1.setHeightForWidth(deleteButtot->sizePolicy().hasHeightForWidth());
        deleteButtot->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(deleteButtot, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        deleteKeyInput = new QLineEdit(gridLayoutWidget_2);
        deleteKeyInput->setObjectName(QString::fromUtf8("deleteKeyInput"));
        sizePolicy.setHeightForWidth(deleteKeyInput->sizePolicy().hasHeightForWidth());
        deleteKeyInput->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(deleteKeyInput, 1, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(40, 180, 211, 135));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        findKeyInput = new QLineEdit(gridLayoutWidget_3);
        findKeyInput->setObjectName(QString::fromUtf8("findKeyInput"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(findKeyInput->sizePolicy().hasHeightForWidth());
        findKeyInput->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(findKeyInput, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 0, 1, 1, 1);

        findResultOutput = new QLineEdit(gridLayoutWidget_3);
        findResultOutput->setObjectName(QString::fromUtf8("findResultOutput"));
        sizePolicy2.setHeightForWidth(findResultOutput->sizePolicy().hasHeightForWidth());
        findResultOutput->setSizePolicy(sizePolicy2);
        findResultOutput->setReadOnly(true);

        gridLayout_3->addWidget(findResultOutput, 1, 1, 1, 1);

        findButton = new QPushButton(gridLayoutWidget_3);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        sizePolicy2.setHeightForWidth(findButton->sizePolicy().hasHeightForWidth());
        findButton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(findButton, 2, 0, 1, 2);

        gridLayoutWidget_4 = new QWidget(centralwidget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(40, 340, 451, 141));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        deleteToKeyRightInput = new QLineEdit(gridLayoutWidget_4);
        deleteToKeyRightInput->setObjectName(QString::fromUtf8("deleteToKeyRightInput"));
        sizePolicy.setHeightForWidth(deleteToKeyRightInput->sizePolicy().hasHeightForWidth());
        deleteToKeyRightInput->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(deleteToKeyRightInput, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_7, 0, 1, 1, 1);

        deleteFromKeyLeftInput = new QLineEdit(gridLayoutWidget_4);
        deleteFromKeyLeftInput->setObjectName(QString::fromUtf8("deleteFromKeyLeftInput"));
        sizePolicy.setHeightForWidth(deleteFromKeyLeftInput->sizePolicy().hasHeightForWidth());
        deleteFromKeyLeftInput->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(deleteFromKeyLeftInput, 1, 0, 1, 1);

        deleteButtot_2 = new QPushButton(gridLayoutWidget_4);
        deleteButtot_2->setObjectName(QString::fromUtf8("deleteButtot_2"));
        sizePolicy1.setHeightForWidth(deleteButtot_2->sizePolicy().hasHeightForWidth());
        deleteButtot_2->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(deleteButtot_2, 2, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "key", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        deleteButtot->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "key", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "key", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "result", nullptr));
        findResultOutput->setText(QString());
        findButton->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "keyLeft", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "keyRight", nullptr));
        deleteButtot_2->setText(QCoreApplication::translate("MainWindow", "delete keys from {KeyLeft...KeyRight}", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
