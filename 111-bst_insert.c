#include "binary_trees.h"
/**
 * bst_insert - inserts value in binary search tree
 * @tree: tree to be searched
 * @value: value to be stored in new node
 * Return: pointer to the new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp;

	if (tree)
	{
		if (*tree == NULL)
		{
			*tree = (bst_t *)binary_tree_node(NULL, value);
			return (*tree);
		}
		tmp = *tree;
		while (tmp)
		{
			if (tmp->n == value)
				break;
			if (tmp->n > value)
			{
				if (!tmp->left)
				{
					tmp->left = (bst_t *)binary_tree_node(tmp, value);
					return (tmp->left);
				}
				tmp = tmp->left;
			}
			else if (tmp->n < value)
			{
				if (!tmp->right)
				{
					tmp->right = (bst_t *)binary_tree_node(tmp, value);
					return (tmp->right);
				}
				tmp = tmp->right;
			}
		}
	}
	return (NULL);
}
