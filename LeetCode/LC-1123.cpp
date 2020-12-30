class Solution {
public:
    pair<TreeNode*, int> LCA(TreeNode* root){
        if(!root){
            return {root,0};
        }
        auto l=LCA(root->left);
        auto r=LCA(root->right);
        if(l.second==r.second) return {root,l.second+1};
        if(l.second>r.second) return {l.first,l.second+1};
        return {r.first,r.second+1};
    }
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return LCA(root).first;
    }
};
