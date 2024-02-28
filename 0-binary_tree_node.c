#include "binary_tree.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	*newNode = (binary_tree_t*) malloc(sizeof(struct binary_tree_t));
	struct binary_tree_t root;

	newNode->value = value;
	newNode->left = NULL;
	newNode->right = NULL;

	if(root == NULL) 
	{
		root = newNode;
	}
	return newNode;
}
