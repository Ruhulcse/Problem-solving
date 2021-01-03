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
    bool result=false;
    
    void DFS(TreeNode* root,int cal,int sum){
        if(!root){
            return;
        }
        if(!root->left&!root->right){
            cal+=root->val;
            if(cal==sum){
                result=true;
            }
            cal=0;
            return;
        }
        DFS(root->left,cal+root->val,sum);
        DFS(root->right,cal+root->val,sum);
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        int cal=0;
        DFS(root,cal,sum);
        return result;
    }
};
