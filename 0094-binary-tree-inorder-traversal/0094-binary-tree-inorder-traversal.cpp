class Solution {
public:
    vector<int> final;//so to avoid one for extra function
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};

        inorderTraversal(root->left);
        final.push_back(root->val);
        inorderTraversal(root->right);

        return final;
    }


};