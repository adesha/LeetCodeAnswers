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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
		ListNode *temp = head;
        ListNode *nextnode = temp->next;
        
        while(nextnode != NULL){
            if(temp->val != nextnode->val){
                temp = nextnode;
                nextnode = nextnode->next;
            }else{
                temp->next = nextnode->next;
                delete nextnode;
                nextnode  = temp->next;
            }
        }
      return head; 
    }
};