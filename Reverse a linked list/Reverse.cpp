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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
     if (head == NULL || head->next == NULL)
            return head;
        // Recursive call
        LinkedListNode<int> *rest = reverseLinkedList(head->next);
        head->next->next = head;
        
        head->next = NULL;
 
        return rest;
}