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
    
    int maxSum(TreeNode* node, int& maxi)
    {
        if(node==NULL)
        {
            return 0;
        }
        
        int maxL = max(0,maxSum(node->left,maxi));
        int maxR = max(0,maxSum(node->right,maxi));
        
        maxi = max(maxi,node->val+maxL+maxR);
        
       
            return (node->val + max(maxL,maxR));
      
    }
    
    int maxPathSum(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        else if(root->right == NULL && root->left == NULL )
        {
            return root->val;
        }
      int maxi=INT_MIN;
        maxSum(root,maxi);
        
        return maxi;
    }
};