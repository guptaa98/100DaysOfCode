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
    void inorder(vector<int>&io,TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(io,root->left);
        io.push_back(root->val);
        inorder(io,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>trav;
        if(root==NULL)
        {
            return trav;
        }
        inorder(trav,root);
        return trav;
    }
};
