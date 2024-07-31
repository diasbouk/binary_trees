#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is leaf
 * @node: The node to check
 * Return: 1 if it is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
