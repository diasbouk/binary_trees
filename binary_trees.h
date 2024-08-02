#ifndef BINARY_TREES_H

#define BINARY_TREES_H


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;





/* Prints a binary tree in a nice formatted way */
void binary_tree_print(const binary_tree_t *parent);
/* Dynamically creating a new node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* Inserting at left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* Inserting at right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* Deleting an entire binary_tree */
void binary_tree_delete(binary_tree_t *tree);
/* Checks for a node if its a lead */
int binary_tree_is_leaf(const binary_tree_t *node);
/* Checks if a node is root */
int binary_tree_is_root(const binary_tree_t *node);
/* PreOrder traversal in the tree with a func */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* InOrder traversing the tree as the same past func */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* PostOrder traversing the tree as the same past func */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* Get the height of the binary tree */
size_t binary_tree_height(const binary_tree_t *tree);
/* Measures the depth of a node in a binary tree */
size_t binary_tree_depth(const binary_tree_t *tree);
/* Measures the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree);
/* Counts the leaves in the b_tree */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* Counts the nodes with at least 1 child in a binary tree */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* Measures the balance factor of a binary tree */
int binary_tree_balance(const binary_tree_t *tree);
#endif 
