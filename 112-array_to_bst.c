#include "binary_trees.h"
/**
 * array_to_bst - converts array to binary search tree
 * @array: array to be converted
 * @size: size of array
 * Return: pointer to the root node of the BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}
	return (root);
}
