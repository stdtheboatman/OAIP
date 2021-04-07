#include "list.h"
#include <QDebug>


List::List() {
    list.init();
}

void List::add(Order value) {
    qDebug() << list.size() << "\n";
    list.add(value);
}

bool List::addUniq(Order value) {
    if (isUniq(value)) {
        list.add(value);
        return true;
    }
    else {
        return false;
    }
}

bool List::isUniq(Order value) {
    for(int i = 0; i < list.size(); i++) {
        if (value.getName() == list[i].getName() && value.getAddress() == list[i].getAddress()) {
            return false;
        }
    }

    return true;
}

bool List::del(int index) {
    if (index < 0 || index >= list.size()) {
        throw QString("can`t delete");
    }

    list.del(index);
    return true;
}

QString List::toString() {
    QString text = "";
    for(int i = 0; i < list.size(); i++) {
        text += list[i].toString() + "\n";
    }

    return text;
}

int List::getOrderIndexById(int id) {
    for(int i = 0; i < list.size(); i++) {
        if (list[i].getId() == id) {
            return i;
        }
    }

    return -1;
}

MyList<int> List::getOrderIndexesByDate(QString date) {
    MyList <int> result;
    result.init();

    for(int i = 0; i < list.size(); i++) {
        if (list[i].getDate() == date) {
            result.add(i);
        }
    }

    return result;
}

Order List::getOderByIndex(int index) {
    return list[index];
}
