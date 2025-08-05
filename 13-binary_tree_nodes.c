#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of nodes with 1 or more child
 * @tree: Pointer to the root node of the tree to count
 *
 * Return: count of the number of nodes, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL) 
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
