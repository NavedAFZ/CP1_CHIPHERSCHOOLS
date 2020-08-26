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
    bool find(TreeNode* root, int sum)
    {
       if (root == NULL)
    {
        return (sum == 0);
    }

    else
    {
        bool ans = 0;

        /* otherwise check both subtrees */
        int subSum = sum - root->val;

        /* If we reach a leaf node and sum becomes 0 then return true*/
        if ( subSum == 0 && root->left == NULL && root->right == NULL )
        return 1;

        if(root->left)
            ans = ans || hasPathSum(root->left, subSum);
        if(root->right)
            ans = ans || hasPathSum(root->right, subSum);

        return ans;
    }

    }
    bool hasPathSum(TreeNode* root, int sum) {
   if (root == NULL)
    {
        return false;
    }
        bool a1=find(root,sum);

       return a1;
    }

};
