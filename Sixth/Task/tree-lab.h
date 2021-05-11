#ifndef TREELAB_H
#define TREELAB_H

#include <QTreeWidgetItem>

#include "avl-tree.h"
#include "list.h"

template <typename Type>
class TreeLab : public AVLtree<Type>
{
private:
    typedef typename AVLtree<Type>::Node Node;

private:
    void dfsSort(Node *root, List<Type> *list) {
        if (!root) {
            return;
        }
        list->append(root->value);

        dfsSort(root->left, list);
        dfsSort(root->right, list);

    }

    void dfsReverseSort(Node *root, List<Type> *list) {
        if (!root) {
            return;
        }

        dfsReverseSort(root->right, list);
        list->append(root->value);
        dfsReverseSort(root->left, list);

    }

    void dfsZXC(Node *root, List<Type> *list) {
        if (!root) {
            return;
        }

        dfsZXC(root->left, list);
        dfsZXC(root->right, list);

        list->append(root->value);
    }

    void dfsToTreeView(Node *root, QTreeWidgetItem *item) {
        if (!root) {
            return;
        }

        if (root->left) {
            QTreeWidgetItem *son = new QTreeWidgetItem;

            son->setText(0, root->left->value + "(key:" + QString::number(root->left->key) + ")");

            item->addChild(son);

            dfsToTreeView(root->left, son);
        }

        if (root->right) {
            QTreeWidgetItem *son = new QTreeWidgetItem;

            son->setText(0, root->right->value + "(key:" + QString::number(root->right->key) + ")");

            item->addChild(son);

            dfsToTreeView(root->right, son);
        }
    }
public:
    int getNodeCountFromLeftSubTree() {
        if (this->root) {
            return this->getSum(this->root->right);
        }
        else {
            return 0;
        }
    }

    void outputSort(List<Type> *list) {
        dfsSort(this->root, list);
    }

    void outputReverseSort(List<Type> *list) {
        dfsReverseSort(this->root, list);
    }

    void outputZXC(List<Type> *list) {
        dfsZXC(this->root, list);
    }

    void outputToTreeView(QTreeWidgetItem *item) {
        if (this->root) {
            item->setText(0, this->root->value + "(key:" + QString::number(this->root->key) + ")");
        }

        dfsToTreeView(this->root, item);
    }
};

#endif // TREELAB_H
