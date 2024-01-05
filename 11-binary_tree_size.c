#include "binary_trees.h"

/**
 * binary_tree_size - counts the number of nodes in a given tree
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: number of nodes
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size;

if (!tree)
{
return (0);
}

size =  binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1;

return (size);
}
