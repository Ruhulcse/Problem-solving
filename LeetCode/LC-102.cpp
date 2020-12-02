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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode *>q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            level++;
            int n=q.size();
            vector<int>localnode;
            for(int i=0;i<n;i++){
                TreeNode *p=q.front();
                int num =p->val;
                localnode.push_back(num);
                q.pop();
                if(p->left!=NULL){
                    q.push(p->left);
                }
                if(p->right!=NULL){
                    q.push(p->right);
                }
            }
           // cout<<"level "<<level<<"result is"<<endl;
           // for(int i=0;i<localnode.size();i++){
           //     cout<<localnode.at(i)<<" ";
           // }
           //  cout<<endl;
          result.push_back(localnode);
        }
        return result;
    }
};
