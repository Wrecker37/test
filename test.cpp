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


    std::cout << "Hello World!" << std::endl;
    return 0;
}