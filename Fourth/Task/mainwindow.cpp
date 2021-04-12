#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_3->hide();
    ui->expressionResultOutput->hide();

    form = new FormGetVariables();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_solveExpressionButton_clicked() {
    QString expression = ui->expressionInput->text();

    QString result = ExpressionSolver::getPostfixExpression(expression);

    ui->expressionPostfixOutput->setText(result);
}

void MainWindow::on_solvePostfixExpressionButton_clicked() {
    delete form;
    form = new FormGetVariables();
    form->show();

    connect(form, SIGNAL(getDateOfVariables(QMap<QChar, double>)), this, SLOT(solveExpression(QMap<QChar, double>)));


    QString expression = ui->expressionPostfixOutput->text();

    QSet<QChar> variables;

    for(auto sym : expression) {
        if (sym.isLetter()) {
            variables.insert(sym);
        }
    }

    int width = 30;
    int width1 = 100;
    int height = 30;

    int x = 10;
    int y = 10;

    QList<QChar> _variables;
    for(auto var : variables) {
        _variables.append(var);
    }

    std::sort(_variables.begin(), _variables.end());

    for(auto var : _variables) {
        qDebug() << var << "\n";

        QLabel *label = new QLabel(form);
        QLineEdit *lineEdit = new QLineEdit(form);

        form->addInputWidget(label);
        form->addInputWidget(lineEdit);

        label->setGeometry(x, y, width, height);
        lineEdit->setGeometry(x + width + 5, y, width1, height);

        label->setText(var);


        label->show();
        lineEdit->show();

        y += height + 10;
    }

}

void MainWindow::solveExpression(QMap<QChar, double> variables) {
    form->hide();

    ui->label_3->show();
    ui->expressionResultOutput->show();

    QString normalExpression = ui->expressionInput->text();
    QString expression = ui->expressionPostfixOutput->text();

    double result = ExpressionSolver::solveExpression(normalExpression, variables);

    QString ultraLeft;
    for(auto sym : normalExpression) {
        if (sym.isLetter()) {
            ultraLeft += QString::number(variables[sym]);
        }
        else {
            ultraLeft += sym;
        }
    }


    QString left;
    for(auto sym : expression) {
        if (sym.isLetter()) {
            left += QString::number(variables[sym]) + " ";
        }
        else {
            left += sym;
        }
    }

    ui->expressionResultOutput->setText(ultraLeft + " = " + left + " = " + QString::number(result));
}
/*
 * (a+b*c)/(d-e)
 * 9.1
 * 0.6
 * 2.4
 * 3.7
 * 8.5
 */
