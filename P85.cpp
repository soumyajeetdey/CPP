// Program to implement a binary search tree (BST)

#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insertHelper(Node* root, int value) {
        if (root == nullptr) {
            return new Node(value);
        }
        if (value < root->data) {
            root->left = insertHelper(root->left, value);
        } else if (value > root->data) {
            root->right = insertHelper(root->right, value);
        }
        return root;
    }

    void inorderHelper(Node* root) {
        if (root != nullptr) {
            inorderHelper(root->left);
            std::cout << root->data << " ";
            inorderHelper(root->right);
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(int value) {
        root = insertHelper(root, value);
    }

    void inorderTraversal() {
        inorderHelper(root);
        std::cout << std::endl;
    }
};

int main() {
    BST bst;
    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(3);
    bst.insert(7);

    std::cout << "Inorder traversal of BST: ";
    bst.inorderTraversal();

    return 0;
}
