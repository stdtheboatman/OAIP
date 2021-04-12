/********************************************************************************
** Form generated from reading UI file 'getvaluesofvariablesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETVALUESOFVARIABLESDIALOG_H
#define UI_GETVALUESOFVARIABLESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_GetValuesOfVariablesDialog
{
public:

    void setupUi(QDialog *GetValuesOfVariablesDialog)
    {
        if (GetValuesOfVariablesDialog->objectName().isEmpty())
            GetValuesOfVariablesDialog->setObjectName(QString::fromUtf8("GetValuesOfVariablesDialog"));
        GetValuesOfVariablesDialog->resize(562, 300);

        retranslateUi(GetValuesOfVariablesDialog);

        QMetaObject::connectSlotsByName(GetValuesOfVariablesDialog);
    } // setupUi

    void retranslateUi(QDialog *GetValuesOfVariablesDialog)
    {
        GetValuesOfVariablesDialog->setWindowTitle(QCoreApplication::translate("GetValuesOfVariablesDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetValuesOfVariablesDialog: public Ui_GetValuesOfVariablesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETVALUESOFVARIABLESDIALOG_H
