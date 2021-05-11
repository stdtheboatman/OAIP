#ifndef AVLTREE_H
#define AVLTREE_H

#include <qDebug>



template <typename Type>
class AVLtree {
protected:
    struct Node {
        Type value;
        int sum;

        int key;
        unsigned char height;

        Node *left;
        Node *right;

        Node(Type _value, int _key) : value(_value) {
            key = _key;
            sum = 1;
            height = 1;
            left = right = nullptr;
        }
    };

    unsigned char getHeight(Node *root) {
        return root ? root->height : 0;
    }

    int getSum(Node *root) {
        return root ? root->sum : 0;
    }

    int getBalance(Node *root) {
        return getHeight(root->left) - getHeight(root->right);
    }

    void fixHeight(Node *root) {
        unsigned char heightLeft = getHeight(root->left);
        unsigned char heightRight = getHeight(root->right);

        root->height = (heightLeft < heightRight ? heightRight : heightLeft) + 1;
    }

    void fixSum(Node *root) {
        root->sum = getSum(root->left) + getSum(root->right) + 1;
    }

    Node* rotateLeft(Node *root) {
        Node *newRoot = root->right;

        root->right = newRoot->left;
        newRoot->left = root;

        fixHeight(root);
        fixHeight(newRoot);

        fixSum(root);
        fixSum(newRoot);

        return newRoot;
    }

    Node* rotateRight(Node *root) {
        Node *newRoot = root->left;

        root->left = newRoot->right;
        newRoot->right = root;

        fixHeight(root);
        fixHeight(newRoot);

        fixSum(root);
        fixSum(newRoot);

        return newRoot;
    }

    Node* balance(Node *root) {
        fixHeight(root);
        fixSum(root);

        if (getBalance(root) == -2) {
            if (getBalance(root->right) > 0) {
                root->right = rotateRight(root->right);
            }


            return rotateLeft(root);
        }

        if (getBalance(root) == 2) {
            if (getBalance(root->left) < 0) {
                root->left = rotateLeft(root->left);
            }

            return rotateRight(root);
        }

        return root;
    }

    Node* findMinimum(Node *root) {
        return root->left ? findMinimum(root->left) : root;
    }

    Node* insert(Node *root, Type value, int key) {
        if (!root) {
            return new Node(value, key);
        }

        if (root->key == key) {
            throw 1000-7;
        }

        if (root->key < key) {
            root->right = insert(root->right, value, key);
        }
        else {
            root->left = insert(root->left, value, key);
        }

        return balance(root);
    }

    Node *removeMin(Node *root) {
        if (!(root->left)) {
            return root->right;
        }

        root->left = removeMin(root->left);
        return balance(root);
    }

    Node* remove(Node *root, int key) {
        if (!root) {
            throw 1000-7;
        }

        if (root->key == key) {

            Node *left = root->left;
            Node *right = root->right;

            delete root;

            if (!right) {
                return left;
            }

            Node *newRoot = findMinimum(right);

            newRoot->right = removeMin(right);
            newRoot->left = left;

            return balance(newRoot);
        }

        if (root->key < key) {
            root->right = remove(root->right, key);
        }
        else {
            root->left = remove(root->left, key);
        }

        return balance(root);
    }

    Type getValue(Node *root, int key) {
        if (!root) {
            throw 1000-7;
        }

        if (root->key == key) {
            return root->value;
        }

        if (root->key < key) {
            return getValue(root->right, key);
        }
        else {
            return getValue(root->left, key);
        }
    }

    void clear(Node *root) {
        if (!root) {
            return;
        }

        clear(root->left);
        clear(root->right);

        delete root;
    }

    Node *root;
public:
    AVLtree() {
        root = nullptr;
    }

    ~AVLtree() {
        clear(root);
    }

    void insert(Type value, int key) {
        root = insert(root, value, key);
    }

    void remove(int key) {
        root = remove(root, key);
    }

    Type getValue(int key) {
        return getValue(root, key);
    }
};

#endif // AVLTREE_H
