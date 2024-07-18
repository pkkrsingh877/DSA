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
public:
    int inOrderTraversal(TreeNode* root, int high, int low, int& sum){
        if(root != nullptr){
            inOrderTraversal(root -> left, high, low, sum);
            if(root -> val >= low && root -> val <= high){
                sum += root -> val;
            }
            inOrderTraversal(root -> right, high, low, sum);
        }
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int initSum = 0;
        int sum = inOrderTraversal(root, high, low, initSum);
        return sum;
    }
};
```