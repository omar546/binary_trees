#include "binary_trees.h"
#include <stdio.h>

/**
 * inserts a node as the right-child of another node
 *
 * @parent: is a pointer to the node to insert the right-child in
 * @value:  is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    if (!parent)
    {
		return (NULL);
    }

	node = binary_tree_node(parent, value);

	if (node == NULL)
    {
		return (NULL);
    }

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;
	return (node);
}
