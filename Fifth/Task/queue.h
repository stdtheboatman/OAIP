#ifndef QUEUE_H
#define QUEUE_H

#include "List.h"
#include <QString>

class Queue
{
public:
    Queue();

    void push(int value);
    void pop();
    bool isEmpty();
    int top();

    QString toString();

    List<int> list;
};

#endif // QUEUE_H
