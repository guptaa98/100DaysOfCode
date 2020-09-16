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
    int maxDepth(TreeNode* root) 
    {
        int h;
        if(root==NULL)
        {
            return 0;
        }
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        if(left>right)
        {
            h=1+left;
        }
        else
        {
            h=1+right;
        }
        return h;
    }
};
