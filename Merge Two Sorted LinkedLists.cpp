#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* List1, Node<int>* List2)
{
           if(List1 == NULL)
            return List2;
        if(List2 == NULL)
            return List1;

        Node<int>* Dummy = new Node<int>(-1);
       Node<int>* ans = Dummy;

        while(List1 != NULL && List2 != NULL){
            int val1 = List1->data;
            int val2 = List2->data;

            if(val1 <= val2){
                ans->next = List1;
                ans = ans->next;
                List1 = List1->next;
            }else{
                ans->next = List2;
                ans = ans->next;
                List2 = List2->next;
            }
        }
        while(List1 != NULL){
            ans->next = List1;
            ans = ans->next;
            List1 = List1->next;
        }
        while(List2 != NULL){
            ans->next = List2;
            ans = ans->next;
            List2 = List2->next;
        }
        return Dummy->next;
}
