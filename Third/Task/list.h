#ifndef LIST_H
#define LIST_H

#include <QList>
#include "order.h"

class List
{
public:
    List();

    void add(Order value);

    void addUniq(Order value);

    bool isUniq(Order value);

    void del(int index);

    QString toString();

    int getOrderIndexById(int id);

    Order getOderByIndex(int index);

private:
    QList <Order> list;
};

#endif // LIST_H
