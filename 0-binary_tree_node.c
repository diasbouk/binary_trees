#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
	binary_tree_t *bt;

	bt = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (bt == NULL) {
		return NULL;
	}
	bt->parent = parent;
	bt->n = value;
	bt->left = NULL;
	bt->right = NULL;

	return bt;
}