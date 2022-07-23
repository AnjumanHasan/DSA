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

    void sum(TreeNode* root,int val,int& ans)
    {
        if(root==NULL)
        {
            return;
        }
        val=val*10;
        val+=root->val;
        if(root->left==NULL && root->right==NULL)
        {
            ans=ans+val;
            val=val/10;
            return;
        }
        
        sum(root->left,val,ans);
        sum(root->right,val,ans);
       
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int value=0,ans=0;
        sum(root,value,ans);
        return ans;
    }
};