#include <iostream>

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int key) {
        val = key;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
private:
    TreeNode* root;

    TreeNode* insertRecursive(TreeNode* root, int key) {
        if (root == nullptr) {
            return new TreeNode(key);
        }

        if (key < root->val) {
            root->left = insertRecursive(root->left, key);
        } else {
            root->right = insertRecursive(root->right, key);
        }

        return root;
    }

    TreeNode* searchRecursive(TreeNode* root, int key) {
        if (root == nullptr || root->val == key) {
            return root;
        }

        if (key < root->val) {
            return searchRecursive(root->left, key);
        }
        return searchRecursive(root->right, key);
    }

    void inorderTraversalRecursive(TreeNode* root) {
        if (root) {
            inorderTraversalRecursive(root->left);
            std::cout << root->val << " ";
            inorderTraversalRecursive(root->right);
        }
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int key) {
        root = insertRecursive(root, key);
    }

    TreeNode* search(int key) {
        return searchRecursive(root, key);
    }

    void inorderTraversal() {
        inorderTraversalRecursive(root);
        std::cout << std::endl;
    }
};

int main() {
    BinaryTree tree;

    int n;
    std::cout << "Enter the number of values to insert: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> value;
        tree.insert(value);
    }

    std::cout << "In-order Traversal: ";
    tree.inorderTraversal();

    int searchKey;
    std::cout << "Enter a value to search for: ";
    std::cin >> searchKey;

    TreeNode* searchResult = tree.search(searchKey);
    if (searchResult) {
        std::cout << searchKey << " found in the tree." << std::endl;
    } else {
        std::cout << searchKey << " not found in the tree." << std::endl;
    }

    return 0;
}