#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void Inserthead(Node *head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
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
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Inserthead(head, 10);
    Inserthead(head, 10);
    Inserthead(head, 10);
    print(head);
}