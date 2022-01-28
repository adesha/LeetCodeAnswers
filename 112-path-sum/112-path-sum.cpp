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
    bool hasPathSum(TreeNode* root, int a) {
        if(root==NULL) return false;

    a-=root->val;

    if(root->left==NULL and root->right==NULL and a==0)
    {
        return true;
    }
    
	return hasPathSum(root->left,a) or hasPathSum(root->right,a);
   
    }
};