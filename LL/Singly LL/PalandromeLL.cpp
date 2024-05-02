/****************************************************************

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

*****************************************************************/



bool isPalindrome(Node *head)
{
    Node* temp = head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    count=count/2;
    Node* curr= head;
    Node* prev = NULL;
    while(count--)
    {
        prev = curr;
        curr=curr->next;
    }

    prev->next = NULL; // Disconnect the first half from the second half
    vector<int> ans;
    Node* start = curr;

    // Store the elements of the second half in a vector
    while(start)
    {
        ans.push_back(start->data);
        start=start->next;
    }

    int i=ans.size()-1;
    start=curr;

    // Reverse the second half
    while(start)
    {
        start->data = ans[i];
        start=start->next;
        i--;
    }

    // Now check Palindrome
    Node* head1 = head;
    Node* head2 = curr; // start points to the beginning of the reversed second half

    while(head1)
    {
        if(head1->data != head2->data)
        {
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}
