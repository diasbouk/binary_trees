#include "binary_trees.h"

/**
	* binary_tree_is_perfect - Checks if its a prefect b_tree
	* @tree: Pointer to the root node
	* Return: 1 if it is , 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;

	if (!tree)
		return (0);
	if (!(tree->left && tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	return (left && right);
}
