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
    int sumRootToLeaf(TreeNode* root) 
    {
      vector<string>v;
        if(root==NULL){return 0;}
        func(v, root, to_string(root->val));
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+= stoi(v[i], 0, 2);;
        }
        return sum;    
    }
   void func(vector<string>& result, TreeNode* root, string t) 
   {
    if(!root->left && !root->right)
    {
        result.push_back(t);
        return;
    }
    if(root->left)
        func(result, root->left, t + to_string(root->left->val));
    if(root->right) 
        func(result, root->right, t  + to_string(root->right->val));
}
};
