#include "binary_trees.h"
/**
 * @brief 
 * 
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (parent->left)
		parent->left->parent = node;

	node->n = value;
	node->left = parent->left;
	parent->left = node;
	return (node);
}
