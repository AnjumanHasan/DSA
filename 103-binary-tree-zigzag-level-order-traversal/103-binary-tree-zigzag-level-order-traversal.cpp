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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> v;
        
        if(root==NULL)
        {
            return v;
        }
        
        queue<TreeNode*> q;
        int level=0;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> v1;
            for(int i=0;i<size;i++)
            {
                TreeNode* node =q.front();
                q.pop();
                    if(node->left!=NULL)
                    {
                        q.push(node->left);
                    }
                    if(node->right!=NULL)
                    {
                        q.push(node->right);
                    }
                 v1.push_back(node->val);          
            }
            if(level==0)
            {
                v.push_back(v1);
                level=1;
            }
            else
            {
                reverse(v1.begin(),v1.end());
                v.push_back(v1);
                level = 0;
            }
           
            v1.clear();
        }
        return v;
    }
};