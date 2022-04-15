#include "binary_trees.h"
/**
 * find_max - finds maximum node
 * @tree: tree to be searched
 * @val: value to be  stored in new node
 * Return: pointer to new node
 */
int find_max(const binary_tree_t *tree, int val)
{
	int l, r;

	if (tree == NULL)
		return (1);
	if (tree->n > val)
	{
		l = find_max(tree->left, val);
		r = find_max(tree->right, val);
		if (l && r)
			return (1);
	}
	return (0);
}
/**
 * find_min - finds  minimum node
 *
 * @tree: tree to be searched
 * @val: value to be stored in new node
 * Return: pointer to new node
 */
int find_min(const binary_tree_t *tree, int val)
{
	int l, r;

	if (tree == NULL)
		return (1);
	if (tree->n < val)
	{
		l = find_min(tree->left, val);
		r = find_min(tree->right, val);
		if (l && r)
			return (1);
	}
	return (0);
}
/**
 * binary_tree_is_bst - checks if binary tree is valid
 *
 * @tree: tree to be searched
 * Return: 1 if tree is valid otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (find_min(tree->left, tree->n) && find_max(tree->right, tree->n))
	{
		if (!tree->left || binary_tree_is_bst(tree->left))
		{
			if (!tree->right || binary_tree_is_bst(tree->right))
				return (1);
		}
	}
	return (0);
}
