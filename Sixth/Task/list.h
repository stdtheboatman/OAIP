#ifndef LIST_H
#define LIST_H

template <typename Type>
class List {
public:
    struct Node {
        Type value;
        Node *left, *right;

        Node(Type _value) {
            value = _value;
            left = right = nullptr;
        }
    };

    List() {
        begin = end = nullptr;
        curSize = 0;
    }

    Node* getNode(int index) {
        if (index < 0 || index > curSize) {
            throw 1000-7;
        }

        Node *result = begin;
        for(int i = 0; i < index; i++) {
            result = result->right;
        }

        return result;

    }

    void append(int index, Type value) {
        if (index < 0 || index > curSize) {
            throw 1000-7;
        }

        if (begin == nullptr) {
            begin = end = new Node(value);
        }
        else {
            if (index == 0) {
                Node* lastBegin = getNode(index);
                begin = new Node(value);

                begin->right = lastBegin;
                lastBegin->left = begin;

            }
            else if (index == curSize) {
                Node* lastEnd = end;
                end = new Node(value);

                lastEnd->right = end;
                end->left = lastEnd;
            }
            else {
                Node* lastElement = getNode(index);
                Node *newElement = new Node(value);


                newElement->left = lastElement->left;
                newElement->right = lastElement;

                lastElement->left->right = newElement;

                lastElement->left = newElement;
            }
        }

        ++curSize;
    }

    void append(Type value) {
        append(size(), value);
    }

    void remove(int index) {
        if (index < 0 || index >= curSize) {
            throw 1000-7;
        }

        if (index == 0) {
            Node *lastBegin = begin;

            begin = lastBegin->right;

            if (begin != nullptr) {
                begin->left = nullptr;
            }

            delete lastBegin;
        }
        else if (index == curSize - 1) {
            Node *lastEnd = end;

            end = lastEnd->left;
            end->right = nullptr;

            delete lastEnd;
        }
        else {
            Node *element = getNode(index);

            element->left->right = element->right;
            element->right->left = element->left;

            delete element;
        };

        --curSize;
    }

    void clear() {
        Node *now = begin;
        for(int i = 0; i < curSize; i++) {
            Node* temp = now;
            now = now->right;

            delete temp;
        }

        begin = nullptr;
        curSize = 0;
    }

    ~List() {
        Node *now = begin;
        for(int i = 0; i < curSize; i++) {
            Node* temp = now;
            now = now->right;

            delete temp;
        }
    }

    Type operator[](int index) {
        return getNode(index)->value;
    };

    int size() {
        return curSize;
    }

private:
    Node *begin;
    Node *end;
    int curSize;
};

#endif // LIST_H
