#include "binary_trees.h"

/**
	* has_both - Check if a node has both first and second
	* as children or benath
	* @ancestor: Node to check if its and ancestor
	* @first: First node
	* @second: second node
	* Return: 1 if it is, otherwise 0
*/

int	has_both(const binary_tree_t *ancestor, const binary_tree_t *first,
			const binary_tree_t *second)
{
	int first_found = 0;
	int second_found = 0;

	if (!ancestor || !first || !second)
		return (0);
	if (ancestor == first || ancestor == second)
		return (1);
	first_found += has_both(ancestor->left, first, second);
	second_found += has_both(ancestor->left, first, second);
	return (first_found + second_found);
}

/**
	* binary_trees_ancestor - Finds the lowest ancestor
	* @first: First node
	* @second: second node
	* Return: Pointer to the ancestor, or NULL if its
	* not found
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second) {
	binary_tree_t *temp;

	if (!first || !second)
		return (NULL);
	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (second == first->parent)
		return ((binary_tree_t *)second);

	if (first == second)
		return ((binary_tree_t *)first);

	temp = first->parent;
	while (temp)
	{
	if (has_both(temp, first, second) == 2)
		return (temp);
	temp  = temp->parent;
	}
	return (NULL);
}
