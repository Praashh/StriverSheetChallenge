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
LinkedListNode<int> * help(LinkedListNode<int> * curr, LinkedListNode<int> * prev){
        if(curr == NULL){
            return prev;
        }
        LinkedListNode<int> * temp = curr->next;
        curr->next = prev;
        return help(temp, curr);
    }
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
      if(head == nullptr){
            return nullptr;
        }
        if(head->next == NULL){
            return head;
        }
        LinkedListNode<int> * ans = help(head, NULL);
        return ans;
}

// T.C->O(N)
// S.C->O(N) [Recursion call Stack]