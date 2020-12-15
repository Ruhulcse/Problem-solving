/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original){
            return nullptr;
        }
        queue<TreeNode*>Tree1,Tree2;
        Tree1.push(original);
        Tree2.push(cloned);
        while(!Tree1.empty()){
            if(Tree1.front()==target){
                return Tree2.front();
            }
            if(Tree1.front()->left){
                Tree1.push(Tree1.front()->left);
                Tree2.push(Tree2.front()->left);
            }
             if(Tree1.front()->right){
                Tree1.push(Tree1.front()->right);
                Tree2.push(Tree2.front()->right);
            }
            Tree1.pop();
            Tree2.pop();
        }
        return nullptr;
    }
};
