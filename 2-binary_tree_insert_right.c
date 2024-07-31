#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a new node at
* the right of of parent
* @parent: Node to inster as its right
* @value: Value to hold in the new node
* Return: Pointer to the node or NULL if it fails
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	if (parent->right)
	{
		new_node = binary_tree_node(parent, value);
		parent->right->parent = new_node;
		new_node->right = parent->right;
		parent->right = new_node;
		return (new_node);
	}
	parent->right = binary_tree_node(parent, value);
	return (parent->right);

}
