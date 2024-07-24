```C++
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
private:
    vector<int> output;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root != nullptr){
            inorderTraversal(root -> left);
            output.push_back(root -> val);
            inorderTraversal(root -> right);
        }
        return output;
    }
};
```