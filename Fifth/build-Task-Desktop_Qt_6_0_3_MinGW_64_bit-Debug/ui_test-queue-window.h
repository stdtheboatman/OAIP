/********************************************************************************
** Form generated from reading UI file 'test-queue-window.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_2D_QUEUE_2D_WINDOW_H
#define UI_TEST_2D_QUEUE_2D_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestQueueWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *queuePushButton;
    QLineEdit *queueViewTopResulOutput;
    QLineEdit *queuePushValueInput;
    QPushButton *queueViewTopButton;
    QPushButton *queueIsEmptyButton;
    QLineEdit *queueIsEmptyResultOutput;
    QPushButton *queuePopButton;
    QLineEdit *queueOutput;
    QLabel *label;
    QListView *listView;

    void setupUi(QDialog *TestQueueWindow)
    {
        if (TestQueueWindow->objectName().isEmpty())
            TestQueueWindow->setObjectName(QString::fromUtf8("TestQueueWindow"));
        TestQueueWindow->resize(610, 457);
        gridLayoutWidget = new QWidget(TestQueueWindow);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 101, 231, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        queuePushButton = new QPushButton(gridLayoutWidget);
        queuePushButton->setObjectName(QString::fromUtf8("queuePushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(queuePushButton->sizePolicy().hasHeightForWidth());
        queuePushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(queuePushButton, 0, 0, 1, 1);

        queueViewTopResulOutput = new QLineEdit(gridLayoutWidget);
        queueViewTopResulOutput->setObjectName(QString::fromUtf8("queueViewTopResulOutput"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(queueViewTopResulOutput->sizePolicy().hasHeightForWidth());
        queueViewTopResulOutput->setSizePolicy(sizePolicy1);
        queueViewTopResulOutput->setAlignment(Qt::AlignCenter);
        queueViewTopResulOutput->setReadOnly(true);

        gridLayout->addWidget(queueViewTopResulOutput, 1, 1, 1, 1);

        queuePushValueInput = new QLineEdit(gridLayoutWidget);
        queuePushValueInput->setObjectName(QString::fromUtf8("queuePushValueInput"));
        sizePolicy1.setHeightForWidth(queuePushValueInput->sizePolicy().hasHeightForWidth());
        queuePushValueInput->setSizePolicy(sizePolicy1);
        queuePushValueInput->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(queuePushValueInput, 1, 0, 1, 1);

        queueViewTopButton = new QPushButton(gridLayoutWidget);
        queueViewTopButton->setObjectName(QString::fromUtf8("queueViewTopButton"));
        sizePolicy.setHeightForWidth(queueViewTopButton->sizePolicy().hasHeightForWidth());
        queueViewTopButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(queueViewTopButton, 0, 1, 1, 1);

        queueIsEmptyButton = new QPushButton(gridLayoutWidget);
        queueIsEmptyButton->setObjectName(QString::fromUtf8("queueIsEmptyButton"));
        sizePolicy.setHeightForWidth(queueIsEmptyButton->sizePolicy().hasHeightForWidth());
        queueIsEmptyButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(queueIsEmptyButton, 2, 0, 1, 1);

        queueIsEmptyResultOutput = new QLineEdit(gridLayoutWidget);
        queueIsEmptyResultOutput->setObjectName(QString::fromUtf8("queueIsEmptyResultOutput"));
        sizePolicy1.setHeightForWidth(queueIsEmptyResultOutput->sizePolicy().hasHeightForWidth());
        queueIsEmptyResultOutput->setSizePolicy(sizePolicy1);
        queueIsEmptyResultOutput->setAlignment(Qt::AlignCenter);
        queueIsEmptyResultOutput->setReadOnly(true);

        gridLayout->addWidget(queueIsEmptyResultOutput, 3, 0, 1, 1);

        queuePopButton = new QPushButton(gridLayoutWidget);
        queuePopButton->setObjectName(QString::fromUtf8("queuePopButton"));
        sizePolicy.setHeightForWidth(queuePopButton->sizePolicy().hasHeightForWidth());
        queuePopButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(queuePopButton, 2, 1, 2, 1);

        queueOutput = new QLineEdit(TestQueueWindow);
        queueOutput->setObjectName(QString::fromUtf8("queueOutput"));
        queueOutput->setGeometry(QRect(100, 370, 231, 24));
        queueOutput->setAlignment(Qt::AlignCenter);
        queueOutput->setReadOnly(true);
        label = new QLabel(TestQueueWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 330, 71, 21));
        label->setAlignment(Qt::AlignCenter);
        listView = new QListView(TestQueueWindow);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(380, 110, 191, 131));

        retranslateUi(TestQueueWindow);

        QMetaObject::connectSlotsByName(TestQueueWindow);
    } // setupUi

    void retranslateUi(QDialog *TestQueueWindow)
    {
        TestQueueWindow->setWindowTitle(QCoreApplication::translate("TestQueueWindow", "Dialog", nullptr));
        queuePushButton->setText(QCoreApplication::translate("TestQueueWindow", "push", nullptr));
        queueViewTopButton->setText(QCoreApplication::translate("TestQueueWindow", "view top", nullptr));
        queueIsEmptyButton->setText(QCoreApplication::translate("TestQueueWindow", "empty?", nullptr));
        queuePopButton->setText(QCoreApplication::translate("TestQueueWindow", "pop", nullptr));
        label->setText(QCoreApplication::translate("TestQueueWindow", "Queue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestQueueWindow: public Ui_TestQueueWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_2D_QUEUE_2D_WINDOW_H
