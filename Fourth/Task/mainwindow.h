#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <expressionsolver.h>
#include <formgetvariables.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_solveExpressionButton_clicked();
    void on_solvePostfixExpressionButton_clicked();
public slots:
    void solveExpression(QMap<QChar, double> variables);

signals:
    void singalGetDataAboutVariables(QMap<QChar, double> variables);

private:
    Ui::MainWindow *ui;
    FormGetVariables *form;
};
#endif // MAINWINDOW_H
