#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: tree to be measured
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
