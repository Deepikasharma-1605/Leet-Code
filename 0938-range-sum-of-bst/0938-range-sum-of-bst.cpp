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
    vector<int> arr;
    void inorder(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int sum = 0;
        inorder(root);
        for(int x : arr){
            if(x >= low && x <= high){
                sum += x;
            }
        }
        return sum;
    }
};