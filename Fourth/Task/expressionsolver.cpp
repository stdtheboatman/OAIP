#include "expressionsolver.h"

ExpressionSolver::ExpressionSolver() {

}

int ExpressionSolver::priority(QChar sym) {
    if (sym == '^') {
        return 3;
    }

    if (sym == '*' || sym == '/') {
        return 2;
    }

    if (sym == '+' || sym == '-') {
        return 1;
    }

    return -(1000 - 7);
}

QString ExpressionSolver::getPostfixExpression(QString expression) {
    std::stack<QChar> stack;
    QString result;

    for(auto sym : expression) {
        if (priority(sym) > 0) {
            /*
             * if this operator
             * */

            while(!stack.empty() && priority(sym) <= priority(stack.top())) {
                result.push_back(stack.top());
                stack.pop();
            }

            stack.push(sym);
        }

        if (sym == '(') {
            stack.push('(');
        }

        if (sym == ')') {
            while(stack.top() != '(') {
                result.push_back(stack.top());
                stack.pop();
            }
            stack.pop();
        }

        if ('a' <= sym && sym <= 'z') {
            result.push_back(sym);
        }
    }

    while(!stack.empty()) {
        result.push_back(stack.top());
        stack.pop();
    }

    return result;
}

double ExpressionSolver::calculate(double a, double b, QChar operation) {
    if (operation == '+') {
            return a + b;
        }

    if (operation == '-') {
        return a - b;
    }

    if (operation == '*') {
        return a * b;
    }

    if (operation == '/') {
        return a / b;
    }

    if (operation == '^') {
        return pow(a, b);
    }

    throw 1000-7;
}

double ExpressionSolver::solveExpression(QString expression, std::map<QChar, double> valueOfVar) {
    expression = getPostfixExpression(expression);

    std::stack <double> stack;

    for(auto sym : expression) {
        if (priority(sym) > 0) {
            /*if this operation
             * */

            double b = stack.top();
            stack.pop();
            double a = stack.top();
            stack.pop();

            stack.push(calculate(a, b, sym));
        }

        if ('a' <= sym && sym <= 'z') {
            stack.push(valueOfVar[sym]);
        }
    }

    return stack.top();
}
