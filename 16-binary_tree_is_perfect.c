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
	if (tree->left)
		leftDepth = 1 + binary_tree_height(tree->left);
	else
		leftDepth = binary_tree_height(tree->left);
	if (tree->right)
		rightDepth = 1 + binary_tree_height(tree->right);
	else
		rightDepth = binary_tree_height(tree->right);
	if (leftDepth > rightDepth)
		return (leftDepth);
	return (rightDepth);
}

/**
	* check_perfection - Checks if its a prefect b_tree
	* @tree: Pointer to the root node
	* @level: Level of the node
	* @depth: Depth of the tree
	* Return: 1 if it is , 0 otherwise
*/

int check_perfection(const binary_tree_t *tree, size_t level, size_t depth)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (level == depth);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (check_perfection(tree->left, level + 1, depth) &&
	check_perfection(tree->right, level + 1, depth));
}

/**
	* binary_tree_is_perfect - Checks if its a prefect b_tree
	* @tree: Pointer to the root node
	* Return: 1 if it is , 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = binary_tree_height(tree);
	return (check_perfection(tree, 0, depth));
}
