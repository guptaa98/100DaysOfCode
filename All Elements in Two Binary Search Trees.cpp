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
    void traverse(TreeNode *root, vector<int> &temp)
    {
        if(!root)
        {
            return;
        }
        temp.push_back(root->val);
        traverse(root->left,temp);
        traverse(root->right,temp);
        return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
        vector<int>list;
        traverse(root1,list);
        traverse(root2,list);
        sort(list.begin(),list.end());
        return list;
    }
};
