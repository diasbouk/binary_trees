#include "binary_trees.h"
/**
	* binary_tree_leaves - Counts the leaves on the b_tree
	* @tree: Root node
	* Return: Number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (1 + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
