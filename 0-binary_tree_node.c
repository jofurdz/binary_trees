#include "binary_trees.h"

/**
 * @brief 
 * 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	node->right = NULL;
	node->left = NULL;
	node->n = value;
	node->parent = parent;

	if (!node)
		return (NULL);

	return (node);
}
