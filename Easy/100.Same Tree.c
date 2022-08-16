// Given the roots of two binary trees p and q, write
// a function to check if they are the same or not.
// Two binary trees are considered the same if
// they are structurally identical, and the nodes have the same value.

bool isSameTree(struct TreeNode* p, struct TreeNode* q){

    if(p == NULL && q == NULL) return true;
    else if(p == NULL || q == NULL) return false;


    if(!isSameTree(p->left, q->left)) return false;
    if(p->val != q->val) return false;
    if(!isSameTree(p->right, q->right)) return false;

    return true;

}
