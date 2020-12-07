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
    vector<int>val1;
    vector<int>val2;
    
    void help1(TreeNode* root){
        if(root==NULL){
           // val.push_back(root->val);
            return;
        }
        help1(root->left);
        help1(root->right);
        if(root->left==NULL&&root->right==NULL){
            val1.push_back(root->val);
        }
    }
    void help2(TreeNode* root){
        if(root==NULL){
            return;
        }
        help2(root->left);
        help2(root->right);
        if(root->left==NULL&&root->right==NULL){
            val2.push_back(root->val);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        help1(root1);
        help2(root2);
        if(val1.size()!=val2.size()){
            return false;
        }
        for(int i=0;i<val1.size();i++){
            if(val1[i]!=val2[i]){
                return false;
            }
        }
        return true;
    }
};
