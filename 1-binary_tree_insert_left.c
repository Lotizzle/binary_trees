#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_c;

	if (left_c == NULL || parent == NULL)
	{
		return (NULL);
	}

	left_c = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		left_c->left = parent->left;
		parent->left->parent = left_c;
	}
	parent->left = left_c;

	return (left_c);
}
