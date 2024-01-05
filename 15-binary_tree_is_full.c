#include "binary_trees.h"

/**
 * binary_tree_is_full - determine if the tree is full
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if full, otherwise 0
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
int size;

if (!tree)
{
return (0);
}

if ((!tree->right && !tree->left) || (tree->right && tree->left))
{
size = binary_tree_is_full(tree->right)
+ binary_tree_is_full(tree->left);
}
else
{
size = -1;
}

return (size != 2 && size != 0 ? 0 : 1);
}
