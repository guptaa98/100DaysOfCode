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
    int minDepth(TreeNode* root) 
    {
        int h;
        if(root==NULL)
        {
            return 0;
        }
        if(!root->left && !root->right)
        {
            return 1;
        }
        if(root->left==NULL)
        {
            return (1+minDepth(root->right));
        }
        else if(root->right==NULL)
        {
            return (1+minDepth(root->left));
        }
        int left=minDepth(root->left);
        int right=minDepth(root->right);
        if(left>right)
        {
            h=1+right;
        }
        else
        {
            h=1+left;
        }
        return h;
    }
};
