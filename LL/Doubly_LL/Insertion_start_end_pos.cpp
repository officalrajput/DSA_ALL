//Insertion At head

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     //constructor

//     Node(int data)
//     {
//         this->data=data;
//         this->next=this->prev=NULL;
//     }

// };

// void InsertionHead(Node* &head, int data) {
//     // Insert when LL not present
//     if (head == NULL) {
//         head = new Node(data); // Create a new node and assign it to head
//     } else {
//         // If LL exists
//         Node* temp = new Node(data);
//         temp->next = head;
//         head->prev = temp;
//         head = temp; // Update head to point to the new node
//     }
// }

// void print(Node* &head)
// {
// Node * trav = head;
// while(trav!=NULL)
// {
//     cout<<trav->data<<" ";
//     trav=trav->next;
// }
// }

// int main()
// {
//   Node* head = NULL;
//     //Insert At Start
//  InsertionHead(head,30);
//  print(head);
// }

//Insertion at end

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     //constructor
// Node(int data)
// {
//     this->data=data;
//     this->next = this->prev=NULL;
// }
// };
// void Insertiontail(Node* &head,int data)
// {
//     if(head == NULL)
//     {
//         head = new Node(data);
//     }
//     else{
//         //step:1--create the new node
//         Node * temp = new Node(data);
//         Node * curr = head;
//         while(curr->next != NULL)
//         {
//             curr=curr->next;
//         }
//         curr->next = temp;
//         temp->prev = curr;
//         curr = temp;
//     }


// }
// void print(Node* &head)
// {
//     Node* trav = head;
//     while(trav)
//     {
//         cout<<trav->data<<" ";
//         trav=trav->next;
//     }
// }
// int main()
// {
//     Node*head = NULL;

//     Insertiontail(head,6);
//      Insertiontail(head,9);
//       Insertiontail(head,10);
//        Insertiontail(head,12);
//     print(head);

// }



// Insert At any pos


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

void InsertAtPos(Node* &head,int data,int pos)
{
    if(head == NULL)
    {
        Node* temp = new Node(data);
    }
    else{
        //create a node
        Node * temp = new Node(data);
        Node* curr = head;
        while(--pos)
        {
            curr=curr->next;
        }
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;    
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
cout<<"Before:"<<endl;
    Insertiontail(head,6);
     Insertiontail(head,9);
      Insertiontail(head,10);
       Insertiontail(head,12);
         print(head);
         cout<<endl;

       cout<<"After:"<<endl;
       

       InsertAtPos(head,90,1);
    print(head);

}



