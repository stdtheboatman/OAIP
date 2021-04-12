#ifndef EXPRESSIONSOLVER_H
#define EXPRESSIONSOLVER_H

#include <iostream>
#include <stack>
#include <math.h>

#include <QString>
#include <QMap>
#include <QDebug>

class ExpressionSolver
{
public:
    ExpressionSolver();

    static int priority(QChar sym);

    static QString getPostfixExpression(QString expression);

    static double calculate(double a, double b, QChar operation);

    static double solveExpression(QString expression, QMap<QChar, double> valueOfvar);
};

#endif // EXPRESSIONSOLVER_H
