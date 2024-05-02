#include<iostream>
using namespace std;
int main()
{}

    class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node *removeNodes(Node *head, int k) {
 Node* prev =NULL;
 Node* curr = head;
 while(curr!=NULL)
 {
     if(curr->data==k)
     {
         prev->next = curr->next;
         delete curr;
         curr=prev->next;
     }
     else{
         prev=curr;
         curr=curr->next;
     }
 }
 return head;
}