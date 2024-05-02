// Approach 2---

// Concept of Slow pointer and slow pointer


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode*slow=head;
        ListNode*fast = head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;   
    }
};


// Approach 1---

// count the total length and divide


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

Node *findMiddle(Node *head) {
    // Write your code here
    Node*temp = head;
    int count=0;
    while(temp != NULL)
    {
        count++;
        temp=temp->next;
    }

    //Then Half the Count and that element will be a Middle element
    count = count/2;
    temp=head;
    while(count--)
    {
        temp=temp->next;

    }
    return temp;
}

