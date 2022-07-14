#include <iostream>
//make a node class that has a value and a left and right pointer
class Node {
public:
    int value;
    Node* left;
    Node* right;
    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};



//write a function that prints a tree in preorder
void printPreorder(Node* root) {
    if (root == NULL) {
        return;
    }
    std::cout << root->value << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

//make a function that reverses a binary tree   (recursive)
void reverse(Node* root) {
    if (root == NULL) {
        return;
    }
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    reverse(root->left);
    reverse(root->right);
}

int main(){
    //generate a tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    //print the tree preorder
    printPreorder(root);

    //reverse the tree
    reverse(root);

    //insert new line and then print the tree preorder
    std::cout << std::endl;
    printPreorder(root);

    return 0;
}