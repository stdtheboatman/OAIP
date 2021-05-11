#include "queue.h"

Queue::Queue() {

}

void Queue::push(int value){
    list.append(list.size(), value);
}

void Queue::pop() {
    list.remove(0);
}

bool Queue::isEmpty() {
    return list.size() == 0;
}

int Queue::top() {
    return list[0];
}

QString Queue::toString() {
    QString result;
    for(int i = 0; i < list.size(); i++) {
        result += QString::number(list[i]) + " ";
    }

    return result;
}
