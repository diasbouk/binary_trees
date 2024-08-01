#include "binary_trees.h"
/**
	* binary_tree_inorder - Inorder traversing the tree
	* @tree: Root node
	* @func: Function to apply on each visited node
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	(*func)(tree->n);
	binary_tree_inorder(tree->right, func);
}
