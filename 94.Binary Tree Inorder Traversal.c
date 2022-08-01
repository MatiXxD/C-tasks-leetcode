// Given the root of a binary tree, return the inorder traversal of its nodes' values.

#define MAX_NODES 100


void fillVals(struct TreeNode* node, int* vals, int* returnSize){

    if(node == NULL) return;

    if(node->left != NULL)
        fillVals(node->left, vals, returnSize);

    *(vals+*returnSize) = node->val;
    (*returnSize)++;

    if(node->right != NULL)
        fillVals(node->right, vals, returnSize);

}

int* inorderTraversal(struct TreeNode* root, int* returnSize){

    int* vals = malloc(MAX_NODES*sizeof(int));

    *returnSize = 0;
    fillVals(root, vals, returnSize);

    return vals;

}
