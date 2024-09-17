``` C++
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
    void postOrderTraversalHelper(TreeNode* root, vector<int>& result){
        if(root == nullptr){
            return;
        }
        postOrderTraversalHelper(root -> left, result);
        postOrderTraversalHelper(root -> right, result);
        result.push_back(root -> val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postOrderTraversalHelper(root, result);
        return result;
    }
};
```