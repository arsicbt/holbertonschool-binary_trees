#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root of the tree
 * @func: Pointer to the function called for each nodes
 * Return: void.
**/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
    func(tree->n);
	binary_tree_inorder(tree->right, func);
}
