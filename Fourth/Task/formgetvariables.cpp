#include "formgetvariables.h"
#include "ui_formgetvariables.h"

FormGetVariables::FormGetVariables(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormGetVariables)
{
    ui->setupUi(this);
}

FormGetVariables::~FormGetVariables()
{
    delete ui;
}

void FormGetVariables::on_enterButton_clicked() {
    QMap<QChar, double> mp = getMapOfData();
    emit getDateOfVariables(mp);
}

void FormGetVariables::addInputWidget(QLineEdit *yk) {
    listOfDataInput.append(yk);
}

void FormGetVariables::addInputWidget(QLabel *yk) {
    listOfVariableNameInput.append(yk);
}

QMap<QChar, double> FormGetVariables::getMapOfData() {
    QMap<QChar, double> result;

    for(int i = 0; i < listOfDataInput.size(); i++) {
        QLabel *label = listOfVariableNameInput[i];
        QLineEdit *lineEdit = listOfDataInput[i];

        QString variable = label->text();
        QString value = lineEdit->text();


        result[variable[0]] = value.toDouble();
    }

    return result;
}
