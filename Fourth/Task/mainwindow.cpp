#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
