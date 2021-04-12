#ifndef FORMGETVARIABLES_H
#define FORMGETVARIABLES_H

#include <QDialog>
#include <QMap>
#include <QLineEdit>
#include <QList>
#include <QLabel>

namespace Ui {
class FormGetVariables;
}

class FormGetVariables : public QDialog
{
    Q_OBJECT

public:
    explicit FormGetVariables(QWidget *parent = nullptr);
    ~FormGetVariables();

private slots:
    void on_enterButton_clicked();

private:
    Ui::FormGetVariables *ui;


signals:
    void getDateOfVariables(QMap<QChar, double> variables);

public:
    void addInputWidget(QLineEdit *yk);
    void addInputWidget(QLabel *yk);
    QMap<QChar, double> getMapOfData();

private:
    QList<QLineEdit*> listOfDataInput;
    QList<QLabel*> listOfVariableNameInput;
};


#endif // FORMGETVARIABLES_H
