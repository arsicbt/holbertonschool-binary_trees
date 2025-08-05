#include "binary_trees.h"

/**
 * _height - measures the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: the height
**/
int _height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h =  _height(tree->left);
	right_h = _height(tree->right);

	if (left_h > right_h)
		return (1 + left_h);
	else
		return (1 + right_h);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: 1 if is perfect, else 0
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height, r_height;

	l_height = 0;
	r_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		l_height = (int)_height(tree->left);

	if (tree->right != NULL)
		r_height = (int)_height(tree->right);


	if (l_height != r_height)
		return (0);

	return (1);
}
