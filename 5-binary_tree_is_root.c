#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if the node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if the node is a leaf, else 0
**/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
