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
    vector<TreeNode*> inorder;
    //Generating vector of all root
    void GenerateVector(TreeNode* root){
        if(root==NULL){
            return ;
        }
        GenerateVector(root->left);
        inorder.push_back(root);
        GenerateVector(root->right);
    }
    //Generating Desired Tree
    TreeNode* BBST(int start, int end){
        if(start>end){
            return NULL;
        }
        int mid=(start+end)/2;
        TreeNode* root = inorder[mid];
        root->left=BBST(start,mid-1);
        root->right=BBST(mid+1,end);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        GenerateVector(root);
        int n= inorder.size();
        root = BBST(0,n-1);
         return root;
    }   
};
