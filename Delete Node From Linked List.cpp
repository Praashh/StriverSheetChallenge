void deleteNode(LinkedListNode<int> * node) {
        LinkedListNode<int>* Next = node->next;
        *node = *Next;
}
// T.C->O(1)
// S.C->O(1)