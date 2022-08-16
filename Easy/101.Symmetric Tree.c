// Given the root of a binary tree, check whether it is
// a mirror of itself (i.e., symmetric around its center).

bool checkSym(struct TreeNode* left, struct TreeNode* right){

    if(left == NULL && right == NULL) return true;
    else if(left == NULL || right == NULL) return false;

    if(!checkSym(left->left, right->right)) return false;
    if(left->val != right->val) return false;
    if(!checkSym(left->right, right->left)) return false;

    return true;

}

bool isSymmetric(struct TreeNode* root){

    return checkSym(root->left, root->right);

}
