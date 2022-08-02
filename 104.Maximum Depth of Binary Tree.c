// Given the root of a binary tree, return its maximum depth.
// A binary tree's maximum depth is the number of nodes along
// the longest path from the root node down to the farthest leaf node.

int getDepth(struct TreeNode* root, int depth){

    if(root == NULL) return depth;

    int dl = getDepth(root->left, depth + 1);
    int dr = getDepth(root->right, depth + 1);

    return dl > dr ? dl : dr;

}

int maxDepth(struct TreeNode* root){

    return getDepth(root, 0);

}
