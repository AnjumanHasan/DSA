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
        int flag=0;
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                   if(node->right!=NULL)
                    {
                        q.push(node->right);
                    }
                    if(node->left!=NULL)
                    {
                        q.push(node->left);
                    }
                
                level.push_back(node->val);
            }
            if(flag==0)
            {
                reverse(level.begin(),level.end());
                flag=1;
            }
            else if (flag==1)
            {
                
                flag=0;
            }
            ans.push_back(level);
        }
        return ans;
    }
};