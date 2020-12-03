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
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        queue<TreeNode *>q;
        q.push(root);
        int sum=0;
        while(!q.empty()){
            int n=q.size();
            int lsum=0;
            for(int i=0;i<n;i++){
                TreeNode *p = q.front();
                 q.pop();
                 lsum+=p->val;
                if(p->left!=NULL){
                    q.push(p->left);
                }
                if(p->right!=NULL){
                    q.push(p->right);
                }
            }
            sum=lsum;
        }
        return sum;
    }
};
