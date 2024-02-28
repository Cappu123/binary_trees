#ifndef BINARY_TREES.h
#define BINARY_TREES.h
#include <stdio.h>
#include <stdlib.h>
/**
 * @n: Integer stored in the node
 * @parent: pointer to the parent node
 * @left: pointer to the left child of the node
 * @right: pointer to the right child of the node
 */
struct binary_tree_node
{
	int n;
	struct binary_tree_node *parent;
	struct binary_tree_node *left;
	struct binary_tree_node *right;
};
typedef struct binary_tree_s binary_tree_t;


/**prototypes**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif




