class Solution {
public:
    int count=0;
    void DFS(TreeNode* root, int mx){
        if(root){
            root->val >=mx?count++:count;
            DFS(root->left,max(mx,root->val));
            DFS(root->right,max(mx,root->val));
        }
    }
    int goodNodes(TreeNode* root) {
        DFS(root,INT_MIN);
        return count;
    }
};
