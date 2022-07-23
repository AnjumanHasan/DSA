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
    
    void inorder(TreeNode* root,vector<int>& v)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
         
    }
    int getMinimumDifference(TreeNode* root) {
        int minimum=INT_MAX;
        vector<int> v;
        inorder(root,v);
        for(int i=1;i<v.size();i++)
        {
            minimum=min(minimum,abs(v[i]-v[i-1]));
        }
        return minimum;
        
    }
};