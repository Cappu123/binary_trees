#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf or not
 * @node: the node to be checked
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left == NULL || node->right == NULL)
	{
		return (1);
	}
	return (0);
}
