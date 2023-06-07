Node* removeKthNode(Node* head, int n)
{
        if(head == NULL)return NULL;

        Node* Dummy = new Node();
        Dummy->next = head;
        Node*slow = Dummy;
        Node*fast = Dummy;

        for(int i=1; i<=n; i++){
            fast = fast->next;
        }
        while(fast->next != NULL){
            fast = fast ->next;
            slow  = slow->next;
        }
        slow->next = slow->next->next;

        return Dummy->next;
}

// T.C->O(N)
// S.C->O(1)