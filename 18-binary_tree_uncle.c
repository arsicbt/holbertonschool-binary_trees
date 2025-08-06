#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: a pointer to the uncle node
**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gd_father;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	gd_father = node->parent->parent;

	if (gd_father->left == node->parent)
		return (gd_father->right);

	else
		return (gd_father->left);
}
