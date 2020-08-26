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
    vector<int> lv(vector<int>&v1,TreeNode *root)
    {
        if(root==NULL)
            return v1;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *t1=q.front();
                q.pop();
                if(i==n-1)
                    v1.push_back(t1->val);
                if(t1->left!=NULL)
                    q.push(t1->left);
                if(t1->right!=NULL)
                    q.push(t1->right);
            }

        }
        return v1;
        }

public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v1;
        v1=lv(v1,root);
        return v1;
    }
};
