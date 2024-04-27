#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    ~Node()
    {
        cout << "Deleted Element is:" << this->data << endl;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void Inserthead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // first create a node
        Node *newNode = new Node(data);

        // then connect it to a head
        newNode->next = head;

        // Update the Head
        head = newNode;
    }
}
void Inserttail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {

        // create Node
        Node *newNode = new Node(data);
        // connect it tail to new node
        tail->next = newNode;
        // update the tail
        tail = newNode;
    }
}
// chache cases if we want to insert at position 0
// that means need to insert to head --head is a starting node

// if we want to insert at the end
// first find the length of the node
int FindLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{

    if (position == 0)
    {
        Inserthead(head, tail, data);
        return;
    }
    int len = FindLength(head);

    if (position >= len)
    {

        Inserttail(head, tail, data);
        return;
    }
    cout << len;

    // NULL wala case
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // Step:1--->find out the curr and prev
    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    // Step:2 --> create a node

    Node *newNode = new Node(data);

    // Step:3 --> first connect newNode to curr then after connect prev to new node

    newNode->next = curr;

    prev->next = newNode;
}

void DeleteNode(int position, Node *&head, Node *&tail)
{
    // from begning
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = FindLength(head);
    if (position == len)
    {
        Node *prev = head;
        int i = 0;
        while (prev->next != tail)
        {
            prev = prev->next;
        }
        delete tail;
        tail = prev;
        tail->next = NULL;
        return;
    }

    // delete from middle
   int i=1;
   Node*prev = head;
   while(i<position-1)
   {
    prev=prev->next;
    i++;
   }

   Node*current= prev->next;

   prev->next = current->next;
   current->next=NULL;
   delete current;
   return;


   //delete 
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // Inserthead(head, 10);
    // Inserthead(head, 20);
    // Inserthead(head, 30);
    Inserttail(head, tail, 50);
    Inserttail(head, tail, 40);
    Inserttail(head, tail, 70);
    Inserttail(head, tail, 700);
    // cout << "Before InsertAtPosition:" << endl;
    // print(head);
    // cout << endl;
    // cout << "After InsertAtPosition:" << endl;
    // insertAtPosition(900, 7, head, tail);
    // print(head);

    DeleteNode(2, head, tail);
    print(head);
}