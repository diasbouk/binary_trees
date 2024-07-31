#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a node is the root
* @node: Node to check
* Return: 1 if it is or 0 if not or NULL case
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
