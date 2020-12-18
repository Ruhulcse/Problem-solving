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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>num;
        queue<TreeNode *>q;
        if(root1!=NULL){
          q.push(root1);   
        }
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode *p=q.front();
                   int n=p->val;
                   num.push_back(n);
                q.pop();
                if(p->left!=NULL){
                    q.push(p->left);
                }
                if(p->right!=NULL){
                    q.push(p->right);
                }
            }
        }
        
        queue<TreeNode *>q1;
         if(root2!=NULL){
          q1.push(root2);   
        }
        while(!q1.empty()){
            int n=q1.size();
            for(int i=0;i<n;i++){
                TreeNode *p1=q1.front();
                   int n=p1->val;
                   num.push_back(n);
                q1.pop();
                if(p1->left!=NULL){
                    q1.push(p1->left);
                }
                if(p1->right!=NULL){
                    q1.push(p1->right);
                }
            }
        }
        sort(num.begin(),num.end());
        return num;
    }
};
