#include "binary_trees.h"

/**
 * binary_tree_insert_right - Create a node at the right of the parent
 * @parent: The next precedent node
 * @value: The value of the node
 * Return: The new node.
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = parent->right;

	if (parent->right != NULL)
		new_node->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
