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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        int carry=0;
        int sum=curr1->val+curr2->val;
        if(sum>9){
            sum=sum%10;
            carry=1;
        }
        ListNode* curr=new ListNode(sum);
        ListNode* head=curr;
        curr1=curr1->next;
        curr2=curr2->next;
        while(curr1!=NULL and curr2!=NULL){
            sum=curr1->val+curr2->val+carry;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode* temp=new ListNode(sum);
            curr->next=temp;
            curr=curr->next;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        while(curr1!=NULL){
            sum=curr1->val+carry;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode* temp=new ListNode(sum);
            curr->next=temp;
            curr=curr->next;
            curr1=curr1->next;
        }
        while(curr2!=NULL){
            sum=curr2->val+carry;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode* temp=new ListNode(sum);
            curr->next=temp;
            curr=curr->next;
            curr2=curr2->next;
        }
        if(carry==1){
            ListNode* temp=new ListNode(carry);
            curr->next=temp;
        }
        return head;
    }
};