/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    Node* temp = head;
    int count=0;
    while(temp !=NULL)
    {
        temp=temp->next;
        count++;
    }
    count-=k;

    if(count==0)
    {
       Node* temp=head;
       head=head->next;
       delete temp;
       return head;
    }
    temp=head;
    while(--count)
    {
        temp=temp->next;
    }

    temp->next=temp->next->next;   
    return head;

    
}
