#include "list.h"
#include <QDebug>


List::List() {

}

void List::add(Order value) {
    list.append(value);
}

void List::addUniq(Order value) {
    if (isUniq(value)) {
        list.append(value);
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

void List::del(int index) {
    if (index < 0 || index >= list.size()) {
        return;
    }

    list.remove(index);
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

Order List::getOderByIndex(int index) {
    return list[index];
}
