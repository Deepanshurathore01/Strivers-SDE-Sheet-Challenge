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

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
     if(first == NULL)return second;
     if(second == NULL) return first;
     if(first->data > second->data) std::swap(first,second);
     Node<int>* res =first;
     while(first!=NULL && second!=NULL){
         Node<int>* tmp =NULL;
         while(first!=NULL && first->data <= second->data){
             tmp =first;
             first =first->next;
         }
         tmp->next =second;
         std::swap(first,second);
     }
     return res;
}
