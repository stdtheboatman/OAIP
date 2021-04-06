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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *orderAddButton;
    QLineEdit *orderNameInput;
    QLineEdit *orderAddressInput;
    QLineEdit *orderDateInput;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *activeOrderTable;
    QLabel *doneOrderTable;
    QSplitter *splitter;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QPushButton *orderDoButton;
    QLineEdit *orderIdToDoInput;
    QLabel *label_4;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QPushButton *orderDeleteButton;
    QLineEdit *orderIdToDeletInput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 40, 231, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        orderAddButton = new QPushButton(gridLayoutWidget);
        orderAddButton->setObjectName(QString::fromUtf8("orderAddButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(orderAddButton->sizePolicy().hasHeightForWidth());
        orderAddButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(orderAddButton, 6, 0, 1, 2);

        orderNameInput = new QLineEdit(gridLayoutWidget);
        orderNameInput->setObjectName(QString::fromUtf8("orderNameInput"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(orderNameInput->sizePolicy().hasHeightForWidth());
        orderNameInput->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(orderNameInput, 0, 1, 1, 1);

        orderAddressInput = new QLineEdit(gridLayoutWidget);
        orderAddressInput->setObjectName(QString::fromUtf8("orderAddressInput"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(orderAddressInput->sizePolicy().hasHeightForWidth());
        orderAddressInput->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(orderAddressInput, 1, 1, 1, 1);

        orderDateInput = new QLineEdit(gridLayoutWidget);
        orderDateInput->setObjectName(QString::fromUtf8("orderDateInput"));
        sizePolicy2.setHeightForWidth(orderDateInput->sizePolicy().hasHeightForWidth());
        orderDateInput->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(orderDateInput, 2, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(450, 40, 331, 501));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        activeOrderTable = new QLabel(gridLayoutWidget_2);
        activeOrderTable->setObjectName(QString::fromUtf8("activeOrderTable"));
        activeOrderTable->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(activeOrderTable, 0, 0, 1, 1);

        doneOrderTable = new QLabel(gridLayoutWidget_2);
        doneOrderTable->setObjectName(QString::fromUtf8("doneOrderTable"));
        doneOrderTable->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(doneOrderTable, 0, 1, 1, 1);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(40, 290, 231, 101));
        splitter->setOrientation(Qt::Horizontal);
        gridLayoutWidget_4 = new QWidget(splitter);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        orderDoButton = new QPushButton(gridLayoutWidget_4);
        orderDoButton->setObjectName(QString::fromUtf8("orderDoButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(orderDoButton->sizePolicy().hasHeightForWidth());
        orderDoButton->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(orderDoButton, 1, 0, 1, 2);

        orderIdToDoInput = new QLineEdit(gridLayoutWidget_4);
        orderIdToDoInput->setObjectName(QString::fromUtf8("orderIdToDoInput"));
        sizePolicy3.setHeightForWidth(orderIdToDoInput->sizePolicy().hasHeightForWidth());
        orderIdToDoInput->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(orderIdToDoInput, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        splitter->addWidget(gridLayoutWidget_4);
        gridLayoutWidget_5 = new QWidget(splitter);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        orderDeleteButton = new QPushButton(gridLayoutWidget_5);
        orderDeleteButton->setObjectName(QString::fromUtf8("orderDeleteButton"));
        sizePolicy3.setHeightForWidth(orderDeleteButton->sizePolicy().hasHeightForWidth());
        orderDeleteButton->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(orderDeleteButton, 1, 0, 1, 2);

        orderIdToDeletInput = new QLineEdit(gridLayoutWidget_5);
        orderIdToDeletInput->setObjectName(QString::fromUtf8("orderIdToDeletInput"));
        sizePolicy3.setHeightForWidth(orderIdToDeletInput->sizePolicy().hasHeightForWidth());
        orderIdToDeletInput->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(orderIdToDeletInput, 0, 1, 1, 1);

        splitter->addWidget(gridLayoutWidget_5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        orderAddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        activeOrderTable->setText(QCoreApplication::translate("MainWindow", "^_^", nullptr));
        doneOrderTable->setText(QCoreApplication::translate("MainWindow", "^_^", nullptr));
        orderDoButton->setText(QCoreApplication::translate("MainWindow", "Do", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        orderDeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
