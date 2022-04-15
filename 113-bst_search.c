#include "binary_trees.h"
/**
 * @brief 
 * 
 */
bst_t *bst_search(const bst_t *tree, int value)
{
    bst_t *tmp;

	tmp = (bst_t *)tree;
	while (tmp)
	{
		if (tmp->n == value)
			return (tmp);
		if (tmp->n < value)
			tmp = tmp->right;
		else
			tmp = tmp->left;
	}
	return (NULL);
}