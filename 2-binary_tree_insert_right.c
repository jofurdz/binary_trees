#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node to the right of parent
 * @parent: parent node
 * @value: value to be inserted into new node
 * Return: pointer to new node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (parent->right)
		parent->right->parent = node;

	node->n = value;
	node->right = parent->right;
	parent->right = node;
	return (node);
}
