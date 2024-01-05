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
size_t right, left;

if (!tree)
{
return (0);
}

if (tree->right) {
right = 1 + binary_tree_height(tree->right);
}
else
{
right = 0;
}

if (tree->left) {
left = 1 + binary_tree_height(tree->left);
}
else
{
left = 0;
}

return (right > left ? right : left);
}
