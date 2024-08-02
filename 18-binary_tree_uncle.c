#include "binary_trees.h"

/**
	* binary_tree_sibling - Finds the sibling of the node
	* @node: Node to find its sibling
	* Return: Sibling or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
	* binary_tree_uncle - Finds the uncle of the node
	* @node: Node to find its uncle
	* Return: Sibling or NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (binary_tree_sibling(node->parent));
}
