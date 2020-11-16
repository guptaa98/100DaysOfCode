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
    int traverse(TreeNode *root,int l,int r, int &sum)
    {
        if(!root)
        {
            return NULL;
        }
        if(root->val >= l && root->val <= r)
        {
            sum=sum+(root->val);
        }
        traverse(root->left,l,r,sum);
        traverse(root->right,l,r,sum);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        int sum=0;
        traverse(root,L,R,sum);
        return sum;
    }
};
