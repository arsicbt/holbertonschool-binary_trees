#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root of the tree
 * Return: The number of leaves find
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaves;

	count_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		count_leaves += 1;
		return (count_leaves);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
