#ifndef MYLIST_H
#define MYLIST_H

#include <QDebug>

template <typename Type>
class MyList
{
public:
    MyList() {
        cnt = 0;
        begin = new node();
    }

    int init() {
        cnt = 0;
        begin = new node();
    }

    ~MyList() {
        node *now = begin;
        node *prev;
        while(now != nullptr) {
            prev = now;
            now = now->next;

            delete prev;
        }
    }

    int size() {
        return cnt;
    }

    void add(Type value) {
        node *now = begin;
        while(now->next != nullptr) {
            now = now->next;
        }

        now->next = new node(value);
        ++cnt;
    }

    Type getByIndex(int index) {
        int i = -1;

        node *now = begin;

        Type result;

        while(now != nullptr) {
            if (i == index) {
                result = now->value;
                break;
            }

            now = now->next;
            i++;
        }

        return result;
    }

    Type operator[](int index) {
        return getByIndex(index);
    }

    bool del(int index) {
        int i = -1;
        node *now = begin;
        node *prev;

        while(now != nullptr) {
            if (i == index) {
                prev->next = now->next;
                delete now;

                --cnt;
                return true;
            }

            i++;
            prev = now;
            now = now->next;
        }

        return false;
    }

    struct node {
        Type value;
        node *next;

        node() {
            value = Type();
            next = nullptr;
        }

        node(Type value) {
            this->value = value;
            next = nullptr;
        }
    };

private:
    node *begin;
    int cnt;

};

#endif // MYLIST_H
