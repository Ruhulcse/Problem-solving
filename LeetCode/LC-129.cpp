class Solution {
public:
    void DFS(TreeNode* root, string s,int &sum){
        if(!root){
            return;
        }
        if(!root->left&!root->right){
            s+=to_string(root->val);
            sum+=stoi(s);
            return;
        }
        DFS(root->left,s+to_string(root->val),sum);
        DFS(root->right,s+to_string(root->val),sum);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        string s="";
        DFS(root,s,sum);
        return sum;
    }
};
