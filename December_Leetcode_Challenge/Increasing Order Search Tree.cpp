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
    void inorder(TreeNode *root,vector<int>&io)
    {
        if(root==NULL)
            return;
        inorder(root->left,io);
        io.push_back(root->val);
        inorder(root->right,io);
    }
    TreeNode* increasingBST(TreeNode* root) 
    {
        vector<int>arr;
        TreeNode *new_root = new TreeNode;
        TreeNode *curr = new_root;
        inorder(root,arr);
        for(int i=0;i<arr.size();i++)
        {
            curr->right = new TreeNode(arr[i]);
            curr = curr->right;
        }
        return new_root->right;
    }
};
