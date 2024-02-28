#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 * struct binary_tree_s -Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: pointer to the parent node
 * @left: pointer to the left child of the node
 * @right: pointer to the right child of the node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_node *parent;
	struct binary_tree_node *left;
	struct binary_tree_node *right;
};
typedef struct binary_tree_s binary_tree_t;


/**prototypes**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* print helper functions */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
static size_t _height(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);


#endif




