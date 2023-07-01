#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
   vector<int>ans;

    if(root == NULL)

    {

        return ans;

    }

    map<int, int>mp;

    queue<pair<TreeNode<int> *, int>>q;

    q.push({root, 0});

    while(!q.empty())

    {

        auto it = q.front();

        q.pop();

        TreeNode<int> * temp = it.first;

        int line = it.second;

        if(mp.find(line) == mp.end())

        {

            mp[line] = temp->val;

        }

        if(temp->left)

        {

            q.push({temp->left, line-1});

        }

        if(temp->right){

            q.push({temp->right, line+1});

        }

    }

    for(auto it : mp)

    {

        ans.push_back(it.second);

    }

    return ans;
}