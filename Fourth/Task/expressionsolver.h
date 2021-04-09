#ifndef EXPRESSIONSOLVER_H
#define EXPRESSIONSOLVER_H

#include <iostream>
#include <stack>
#include <math.h>
#include <map>

#include <QString>

class ExpressionSolver
{
public:
    ExpressionSolver();

    static int priority(QChar sym);

    static QString getPostfixExpression(QString expression);

    static double calculate(double a, double b, QChar operation);

    static double solveExpression(QString expression, std::map<QChar, double> valueOfvar);
};

#endif // EXPRESSIONSOLVER_H
