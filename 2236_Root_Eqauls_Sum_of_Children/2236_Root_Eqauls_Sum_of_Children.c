#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;    
};

bool checkTree(struct TreeNode* root) {
    if (root->left->val + root->right->val == root->val)
        return true;
    return false;
}

int main() {
    // Example 1
    struct TreeNode root, left, right;
    root.val = 10, left.val = 4, right.val = 6;
    root.left = &left, root.right = &right;

    if (checkTree(&root)) printf("Example 1: true\n");
    else printf("Example 1: false\n");

    // Example 2
    root.val = 5, left.val = 3, right.val = 1;

    if (checkTree(&root)) printf("Example 2: true\n");
    else printf("Example 2: false\n");

    return 0;
}