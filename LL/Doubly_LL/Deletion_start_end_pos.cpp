#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
Node(int data)
{
    this->data=data;
    this->next = this->prev=NULL;
}
};

void DeleteAnypos(Node* &head,int pos)
{
    Node*curr = head;
    while(--pos)
    {
        curr=curr->next;
    }
    curr->prev = curr->next;
    curr->prev->next = curr->next;
    delete curr;
}
void Insertiontail(Node* &head,int data)
{
    if(head == NULL)
    {
        head = new Node(data);
    }
    else{
        //step:1--create the new node
        Node * temp = new Node(data);
        Node * curr = head;
        while(curr->next != NULL)
        {
            curr=curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
        curr = temp;
    }


}
void print(Node* &head)
{
    Node* trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}
int main()
{
    Node*head = NULL;

    Insertiontail(head,6);
     Insertiontail(head,9);
      Insertiontail(head,10);
       Insertiontail(head,12);
       cout<<"Before"<<endl<<" ";
    print(head);
    cout<<endl;
     cout<<"Before"<<endl<<" ";
    print(head);
     DeleteAnypos(head,2);


}


///Delete position handlw head and end case
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
Node(int data)
{
    this->data=data;
    this->next = this->prev=NULL;
}
};

void DeleteAnypos(Node* &head,int pos)
{
  if(head != NULL)
  {
    Node*curr = head;
   
    while(--pos)
    {
          
        curr=curr->next;
    }
    curr->prev->next=curr->next;
    curr->next->prev = curr->next;
    delete curr;
  }
}
void Insertiontail(Node* &head,int data)
{
    if(head == NULL)
    {
        head = new Node(data);
    }
    else{
        //step:1--create the new node
        Node * temp = new Node(data);
        Node * curr = head;
        while(curr->next != NULL)
        {
            curr=curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
        curr = temp;
    }


}
void print(Node* &head)
{
    Node* trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}
int main()
{
    Node*head = NULL;

    Insertiontail(head,6);
     Insertiontail(head,9);
      Insertiontail(head,10);
       Insertiontail(head,12);
       cout<<"Before"<<endl<<" ";
    print(head);
    cout<<endl;
     cout<<"After"<<endl<<" ";
    print(head);
     DeleteAnypos(head,3);


}