#include "binary_trees.h"

/**
	* binary_tree_balance - Measures the balance factor of a binary tree
	* @tree: A pointer to the root node of the tree to measure the balance factor
	* Return: Balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftH;
	int rightH;

	if (!tree)
		return (0);
	if (tree->left)
		leftH = 1 + binary_tree_balance(tree->left);
	else
		leftH = binary_tree_balance(tree->left);
	if (tree->right)
		rightH = 1 + binary_tree_balance(tree->right);
	else
		rightH = binary_tree_balance(tree->right);
	if (!tree->parent)
		return (leftH - rightH);
	return (leftH > rightH ? leftH : rightH);
}
