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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *first=head,*prev;
    int count=0;
    
    while(first)
    {
        count++;
        first=first->next;
    }
    
    first=head;
    int t = count - n;
    
    if(t==0)
        return head->next;          // first element delete 
                
    while(t--)
    {
        prev=first;
        first=first->next;          
    }
    
    if(n==1)
        prev->next=NULL;            //last element delete
    else
    {
        prev->next=first->next;     // between element delete
    }
    
    return head;
    }
};