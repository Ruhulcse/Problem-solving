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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>value;
        stack<TreeNode*>store;
        while(root|| !store.empty()){
            while(root){
                store.push(root);
                root=root->left;
            }
            root=store.top();
            store.pop();
            value.push_back(root->val);
            root=root->right;
        }
        return value;
    }
};
