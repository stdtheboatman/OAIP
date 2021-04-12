/********************************************************************************
** Form generated from reading UI file 'formgetvariables.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMGETVARIABLES_H
#define UI_FORMGETVARIABLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FormGetVariables
{
public:
    QPushButton *enterButton;

    void setupUi(QDialog *FormGetVariables)
    {
        if (FormGetVariables->objectName().isEmpty())
            FormGetVariables->setObjectName(QString::fromUtf8("FormGetVariables"));
        FormGetVariables->resize(620, 560);
        enterButton = new QPushButton(FormGetVariables);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(170, 350, 251, 111));

        retranslateUi(FormGetVariables);

        QMetaObject::connectSlotsByName(FormGetVariables);
    } // setupUi

    void retranslateUi(QDialog *FormGetVariables)
    {
        FormGetVariables->setWindowTitle(QCoreApplication::translate("FormGetVariables", "Dialog", nullptr));
        enterButton->setText(QCoreApplication::translate("FormGetVariables", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormGetVariables: public Ui_FormGetVariables {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMGETVARIABLES_H
