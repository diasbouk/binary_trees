#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new binary tree
 * @parent: Parent of our binary tree
 * @value: Value of the root
 * Return: Pointer to root or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	if (parent->left)
	{
		new_node = binary_tree_node(parent, value);
		parent->left->parent = new_node;
		new_node->left = parent->left;
		parent->left = new_node;
		return (new_node);
	}
	parent->left = binary_tree_node(parent, value);
	return (parent->left);
}
