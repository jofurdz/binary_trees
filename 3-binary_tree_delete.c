#include "binary_trees.h"
/**
 * @brief 
 * 
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        if (tree->left != NULL)
            binary_tree_delete(tree->left);
        if (tree->right != NULL)
            binary_tree_delete(tree->right);
        free(tree);
    }
}
