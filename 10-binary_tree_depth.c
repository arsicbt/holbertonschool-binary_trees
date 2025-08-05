#include "binary_trees.h"

/**
 * binary_tree_depth - Count the depth of a node
 * @tree: pointer to the root of the tree
 * Return: the depth of the node
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}

	return (count);
}
