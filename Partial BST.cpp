#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool solve(BinaryTreeNode<int> *root, BinaryTreeNode<int> *minNode, BinaryTreeNode<int> *maxNode) {
    if(root == nullptr) return true;
    if(minNode != nullptr && minNode->data > root->data || maxNode != nullptr && maxNode->data < root->data)
    return false;
    return solve(root->left, minNode, root) && solve(root->right, root, maxNode);

}

bool validateBST(BinaryTreeNode<int> *root) {
    return solve(root, nullptr, nullptr);
}