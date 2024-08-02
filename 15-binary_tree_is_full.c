#include "binary_trees.h"

/**
	* binary_tree_is_full - Checks if a binary tree is full
	* @tree: Root node
	* Return: 1 if it's full or 0 otherwise (0 if NULL)
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!(tree->left && tree->right) && (tree->left || tree->right))
		return (0);
	if ((!tree->left && !tree->right) || (!tree->left && !tree->right))
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
