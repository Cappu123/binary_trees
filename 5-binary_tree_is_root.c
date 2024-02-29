#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root or not
 * @node: a pointer to the node to check
 * 
 * Returns 1 if node is a root, 0 otherwise
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent !=  NULL || node == NULL)
	{
		return (0);
	}
	return (1);
}