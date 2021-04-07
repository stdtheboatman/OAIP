#ifndef LIST_H
#define LIST_H

#include <QList>
#include "order.h"
#include "mylist.h"

class List
{
public:
    List();

    void add(Order value);

    bool addUniq(Order value);

    bool isUniq(Order value);

    bool del(int index);

    QString toString();

    int getOrderIndexById(int id);

    MyList<int> getOrderIndexesByDate(QString date);

    Order getOderByIndex(int index);


private:
    MyList <Order> list;
};

#endif // LIST_H
