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
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
string s;
int i=0;
while(temp!=NULL)
{
string p=to_string(temp->val);
s.append(p);
temp=temp->next;
i++;
}
int n=s.size();
for(i=0;i<n/2;i++)
{
if(s[i]!=s[n-1-i])
{
return false;
}
}
return true;
    }
};