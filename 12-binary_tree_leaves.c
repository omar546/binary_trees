#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in a given tree
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: number of leaves
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t size;

if (!tree)
{
return (0);
}

size = (tree->left == NULL && tree->right == NULL) ? 1 : 0;
size += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

return (size);
}
