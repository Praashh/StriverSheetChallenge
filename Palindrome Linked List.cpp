#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
    bool helper(vector<int>temp){
        int e = temp.size()-1;
        int s = 0;
        while(s <= e){
            if(temp[s] != temp[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
bool isPalindrome(LinkedListNode<int> *head) {
        LinkedListNode<int> * curr = head;
        vector<int>temp;
        while(curr != NULL){
            // cout << curr->val << " ";
            temp.push_back(curr->data);
            curr = curr->next;
        }
        // for(auto i:temp){
        //     cout << i << endl;
        // }

        return helper(temp);
}

//T.C->O(n)
//S.C->O(n)