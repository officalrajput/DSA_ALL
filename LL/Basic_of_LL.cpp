// // Printing  LL

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     //constructor

//     Node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void print(Node* head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main()
// {
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* forth = new Node(40);
//     Node* fifth = new Node(50);

//     //Pointing to next address
//     first->next=second;
//     second->next=third;
//     third->next=forth;
//     forth->next=fifth;

//     //call the function

//     print(first);

// }



// Insertion a LL

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

void InsertionLL(Node* &head,int data)
{
    //Step-->1 Create a node in which you have to fill
    Node* newNode= new Node(data);

    //Step-->2 point the address of newnode  to prev node
    newNode->next=head;

    //Step -->3 Change head now point to newNode (Because of head is a starting node)
    head = newNode;

}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node* head=new Node(10);
    InsertionLL(head,100);
    InsertionLL(head,200);
    InsertionLL(head,300);
    InsertionLL(head,400);
    InsertionLL(head,500);

    print(head);

}