#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure
 *
 * Return: height of the tree
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t right_height, left_height;

if (!tree)
{
return (0);
}

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return 1 + (left_height > right_height ? left_height : right_height);
}
