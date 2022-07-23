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
    
    void makeString(TreeNode* root,vector<string>& v,string s)
    {
        if(root==NULL)
        {
            return;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            s+=to_string(root->val);
            v.push_back(s);
            
            return;
        }
        s+=to_string(root->val)+"->";
        makeString(root->left,v,s);
        makeString(root->right,v,s);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        string s="";
        makeString(root,v,s);
        return v;
    }
};