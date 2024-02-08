// Program to perform operations on a binary tree (insertion, traversal)

#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
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
    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        root = insertHelper(root, value);
    }

    void inorderTraversal() {
        inorderHelper(root);
        std::cout << std::endl;
    }
};

int main() {
    BinaryTree bt;
    bt.insert(10);
    bt.insert(5);
    bt.insert(15);
    bt.insert(3);
    bt.insert(7);

    std::cout << "Inorder traversal of binary tree: ";
    bt.inorderTraversal();

    return 0;
}
