#include "binary_trees.h"

/**
	* binary_tree_preorder - Preorder traversing the tree with print func
	* @tree: Pointer to the root of the tree
	* @func: Pointer to the function to use on the nodes
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
