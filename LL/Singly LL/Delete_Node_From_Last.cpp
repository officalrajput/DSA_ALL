/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* deleteLast(Node* list) {
   if(list == NULL)
   {
       return NULL;
   }

   if(list->next == NULL)
   {
       delete list;
       return NULL;
   }

   Node*prev = NULL;
   Node* tail = list;

   while(tail->next != NULL)
   {
       prev=tail;
       tail=tail->next;
   }

   prev->next = NULL;
   prev=tail;

   delete tail;
   
   return list;
}
