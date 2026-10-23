
// Topic: Introduction to Trees
// Concepts: Node, Root, Left Child, Right Child,
// Binary Tree, Structure

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main() {
    Node* root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);

    cout << "Root: " << root->data << endl;
    cout << "Left Child: " << root->left->data << endl;
    cout << "Right Child: " << root->right->data << endl;

    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
