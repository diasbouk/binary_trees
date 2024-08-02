#include "binary_trees.h"
/**
	* binary_tree_height - Counts tree height
	* @tree: Tree to check height
	* Return: Height of the b_tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftDepth;
	int rightDepth;

	if (!tree)
		return (0);
	leftDepth = binary_tree_height(tree->left);
	rightDepth = binary_tree_height(tree->right);
	if (leftDepth > rightDepth)
		return (1 + leftDepth);
	return (1 + rightDepth);
}
