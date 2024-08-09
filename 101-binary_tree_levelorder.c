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
	* binary_tree_depth - measures the depth of a node in a binary tree
	* @tree: Pointer to the node to checko
	* Return: Depth of that node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}


/**
	* ultra_binary_level_order - Leve order travers with a level variable
	* @tree: Pointer to the root node
	* @func: function to call upon each node
	* @level: Current level to check
*/

void ultra_binary_level_order(const binary_tree_t *tree,
							  void (*func)(int), unsigned int level)
{
	if (!tree)
		return;
	if (binary_tree_depth(tree) == level)
		(*func)(tree->n);
	ultra_binary_level_order(tree->left, (*func), level);
	ultra_binary_level_order(tree->right, (*func), level);
}


/**
	* binary_tree_levelorder - Leve order travers
	* @tree: Pointer to the root node
	* @func: function to call upon each node
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int max_level;
	int level;

	if (!tree || !func)
		return;
	max_level = binary_tree_height(tree);
	level = 0;
	while (level <= max_level)
	{
		ultra_binary_level_order(tree, (*func), level);
		level++;
	}
}
