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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *addValueInput;
    QPushButton *addButton;
    QLineEdit *addKeyInput;
    QLabel *label;
    QLabel *label_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *countNodeOutput;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *deleteButton;
    QLineEdit *deleteKeyInput;
    QLabel *label_4;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QPushButton *getButton;
    QLabel *label_5;
    QLineEdit *getKeyInput;
    QLineEdit *dfs1Output;
    QLineEdit *dfs2Output;
    QLineEdit *dfs3Output;
    QPushButton *dfsButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(280, 40, 311, 401));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 40, 171, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addValueInput = new QLineEdit(gridLayoutWidget);
        addValueInput->setObjectName(QString::fromUtf8("addValueInput"));

        gridLayout->addWidget(addValueInput, 1, 0, 1, 1);

        addButton = new QPushButton(gridLayoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 2, 0, 1, 2);

        addKeyInput = new QLineEdit(gridLayoutWidget);
        addKeyInput->setObjectName(QString::fromUtf8("addKeyInput"));

        gridLayout->addWidget(addKeyInput, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 360, 173, 80));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        countNodeOutput = new QLineEdit(gridLayoutWidget_2);
        countNodeOutput->setObjectName(QString::fromUtf8("countNodeOutput"));
        countNodeOutput->setReadOnly(true);

        gridLayout_2->addWidget(countNodeOutput, 1, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(40, 260, 171, 81));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        deleteButton = new QPushButton(gridLayoutWidget_3);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout_3->addWidget(deleteButton, 2, 0, 1, 1);

        deleteKeyInput = new QLineEdit(gridLayoutWidget_3);
        deleteKeyInput->setObjectName(QString::fromUtf8("deleteKeyInput"));

        gridLayout_3->addWidget(deleteKeyInput, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(centralwidget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(40, 150, 171, 81));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        getButton = new QPushButton(gridLayoutWidget_4);
        getButton->setObjectName(QString::fromUtf8("getButton"));

        gridLayout_4->addWidget(getButton, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        getKeyInput = new QLineEdit(gridLayoutWidget_4);
        getKeyInput->setObjectName(QString::fromUtf8("getKeyInput"));

        gridLayout_4->addWidget(getKeyInput, 1, 0, 1, 1);

        dfs1Output = new QLineEdit(centralwidget);
        dfs1Output->setObjectName(QString::fromUtf8("dfs1Output"));
        dfs1Output->setGeometry(QRect(50, 500, 113, 24));
        dfs1Output->setReadOnly(true);
        dfs2Output = new QLineEdit(centralwidget);
        dfs2Output->setObjectName(QString::fromUtf8("dfs2Output"));
        dfs2Output->setGeometry(QRect(180, 500, 113, 24));
        dfs3Output = new QLineEdit(centralwidget);
        dfs3Output->setObjectName(QString::fromUtf8("dfs3Output"));
        dfs3Output->setGeometry(QRect(310, 500, 113, 24));
        dfsButton = new QPushButton(centralwidget);
        dfsButton->setObjectName(QString::fromUtf8("dfsButton"));
        dfsButton->setGeometry(QRect(180, 470, 111, 25));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 530, 55, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 530, 141, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 530, 121, 20));
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
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Count nodes from left subtree", nullptr));
        countNodeOutput->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        getButton->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        dfsButton->setText(QCoreApplication::translate("MainWindow", "dfs", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\320\271", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \320\276\320\261\321\205\320\276\320\264", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\321\213\320\271 \320\276\320\261\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
