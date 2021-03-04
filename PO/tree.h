#include "node.h"
class BST
{
private:
    node *_root;
    void insert(node *treeNode, std::string data);
    bool isBalanced(node *treeNode);
    int getHeight(node *treeNode);
    void deleteBST(node *treeNode);
    void inOrder(node *treeNode);
    void preOrder(node *treeNode);
    void postOrder(node *treeNode);

public:
    BST(); // constructor
    void insert(std::string data) { insert(_root, data); }
    bool iscreated()
    {
        if (_root->key == "")
            return false;
        return true;
    }
    int getHeight() { return getHeight(_root); }
    node *getMaxNode();
    node *getMinNode();

    void deleteBST() { deleteBST(_root); }

    bool isBalanced() { return isBalanced(_root); }

    void inOrder() { inOrder(_root); }
    void preOrder() { preOrder(_root); }
    void postOrder() { postOrder(_root); }
};