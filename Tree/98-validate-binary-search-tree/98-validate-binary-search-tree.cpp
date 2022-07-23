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
    bool validate(TreeNode* root,long long high, long long low)
    {
        if(root==NULL)
        {
            return true;
        }
       
        if(root->val >= high || root->val<=low)
        {
            return false;
        }
        
        return validate(root->left,root->val,low) && validate(root->right,high,root->val);
        
    }
    bool isValidBST(TreeNode* root) {
       long long  high=LONG_MAX, low=LONG_MIN;
         if(root->left==NULL && root->right ==NULL)
        {
            return true;
        }
        return validate(root,high,low);
        
    }
};