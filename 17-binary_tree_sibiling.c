#include "binary_trees.h"

/**
 * binary-tree_sibiling - finds the sibilig of a node
 * @node: a pointer to the node to find the sibiling of
 *
 * Return: NULL if node is NULL and no sibiling
 * otherwise a pointer to thee sibiling
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
