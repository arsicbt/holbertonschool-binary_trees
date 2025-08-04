#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Create a node at the left of the parent
 * @parent: The next precedent node
 * @value: The value of the node
 * Return: The new node.
**/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	if (parent == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else if (parent->left == NULL)
	{
		new_node->left = NULL;
	}
	else if (parent->left != NULL)
	{
		new_node->left = parent->left;
	}

	new_node->n = value;
	new_node->right = NULL;
	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
