#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int lowestCommonAncestor(TreeNode<int> *root, int p, int q)
{
	if(!root) return -1;
    if(root->data==p || root->data==q)return root->data;
    int l=lowestCommonAncestor(root->left,p,q);
    int r=lowestCommonAncestor(root->right,p,q);
    if(l==-1)return r;
    else if(r==-1)return l;
    else return root->data;
}