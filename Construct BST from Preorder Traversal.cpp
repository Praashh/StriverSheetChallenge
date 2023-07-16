#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/

TreeNode<int>* preOrderTree(vector<int> &preorder){

    // Write your code here.

      int n=preorder.size();

      stack<TreeNode<int>*>st;

      TreeNode<int>* root= new TreeNode<int>(preorder[0]);

      st.push(root);

      for(int i=1;i<n;i++)

      {

          TreeNode<int>* temp=NULL;

          while(!st.empty() && st.top()->data<preorder[i])

          {

              temp=st.top();

              st.pop();

          }

          if(temp)

          {

              temp->right=new TreeNode<int>(preorder[i]);

              st.push(temp->right);

          }

          else

          {

              temp=st.top();

              temp->left=new TreeNode<int>(preorder[i]);

              st.push(temp->left);

          }

      }

      return root;

}