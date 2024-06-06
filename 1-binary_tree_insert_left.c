#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new binary tree
 * @parent: Parent of our binary tree
 * @value: Value of the root
 * Return: Pointer to root or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = binary_tree_node(parent, value);

	if (!child || !parent)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = child;
		child->parent = parent;
		child->left = parent->left;
		parent->left = child;

		return (child);
	}

	child->parent = parent;
	return (child);
}
