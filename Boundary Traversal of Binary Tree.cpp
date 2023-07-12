#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

bool isLeaf(TreeNode<int> *root){

    if(root->right==nullptr && root->left==nullptr) return true;

    return false;

}

void leftB(TreeNode<int>* root,vector<int>&ans){

    while(root){

        if(!isLeaf(root)) ans.push_back(root->data);

        if(root->left) root=root->left;

        else root=root->right;

    }

}

void leafN(TreeNode<int>* root,vector<int>&ans){

    if(isLeaf(root)){

        ans.push_back(root->data);

        return ;

    }

    if(root->left) leafN(root->left,ans);

    if(root->right) leafN(root->right,ans);

}

void rightB(TreeNode<int>* root,vector<int>&ans){

    vector<int>temp;

    while(root){

        if(!isLeaf(root)) temp.push_back(root->data);

        if(root->right) root=root->right;

        else root=root->left;

    }

    for(int i=temp.size()-1;i>=0;i--){

        ans.push_back(temp[i]);

    }

}

 

vector<int> traverseBoundary(TreeNode<int>* root){

    vector<int>ans;

    if(!root) return ans;

    if(!isLeaf(root)){

    ans.push_back(root->data);

    }

    leftB(root->left,ans);

    leafN(root,ans);

    rightB(root->right,ans);

    return ans;

}