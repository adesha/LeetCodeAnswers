/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        set<int>s;
        for(int i=0;i<ans.size();i++){
            s.insert(ans[i]);
        }
        if(s.size()<2){
            return -1;
        }
        int k=2,c=0;
        for(auto x:s){
            k--;
            if(k==0){
                c=x;
                break;
            }
        }
        return c;
    }
};