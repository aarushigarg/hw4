#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)
#include <algorithm>
#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
int pathLength(Node * root);


bool equalPaths(Node * root)
{
    // Add your code below
    if (root == NULL) {
        return true;
    }
    if (root->left == NULL && root->right == NULL) {
        return true;
    }
    if (root->left == NULL && root->right != NULL) {
        return pathLength(root->right->left) == pathLength(root->right->right);
    }
    if (root->left != NULL && root->right == NULL) {
        return pathLength(root->left->left) == pathLength(root->left->right);
    }
    if (pathLength(root->left) == pathLength(root->right)) {
        return true;
    }
    return false;
}

int pathLength(Node * root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    return 1 + max(pathLength(root->left), pathLength(root->right));
    
}

