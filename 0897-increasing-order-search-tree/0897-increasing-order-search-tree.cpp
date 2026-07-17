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
    vector<TreeNode*> ans;
    void inorder(TreeNode* root){
        if(root == NULL){
            return ;
        }
        inorder(root->left);
        ans.push_back(root);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        inorder(root);
        for(int i = 0 ; i < ans.size() -1 ; i++){
            ans[i]->left = NULL;
            ans[i]->right = ans[i+1];
        }
        ans.back()->left = NULL;
        ans.back()->right = NULL;
        return ans[0]; 
    }
};