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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }

        ListNode*temp = head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        //case when k is greater that the value of count
        k=k%count;
        //case when no rotation is needed or if rotation and count is equal
        if(k==0 || k%count==0)
        {
            return head;
        }

        count = count-k;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(count--)
        {
            prev = curr;
            curr=curr->next;
        }
        prev->next = NULL;

        ListNode* tail = curr;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->next = head;
        head = curr;
        return head;
        
    }
};