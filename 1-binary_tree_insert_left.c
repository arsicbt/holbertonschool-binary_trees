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

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;

	if (parent->left != NULL)
	{
		new_node->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
