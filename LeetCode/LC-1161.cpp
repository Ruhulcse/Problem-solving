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
    int maxLevelSum(TreeNode* root) {
        int mx=-1000000;
        if(root==NULL){
            return 0;
        }
        queue<TreeNode *>q;
        q.push(root);
        int level=0;
        int mxlevel=0;
        while(!q.empty()){
            level++;
            int n=q.size();
            int levelsum=0;
            for(int i=0;i<n;i++){
                TreeNode *p=q.front();
                 levelsum+=p->val;
                q.pop();
                if(p->left!=NULL){
                    q.push(p->left);
                }
                if(p->right!=NULL){
                    q.push(p->right);
                }
            }
            //cout<<level<<"level sum="<<levelsum<<endl;
            if(levelsum>mx){
                mx=levelsum;
                mxlevel=level;
            }
        }
        return mxlevel;
    }
};
