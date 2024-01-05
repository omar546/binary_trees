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

if (tree->right)
{
right = 1 + binary_tree_height(tree->right);
}
else
{
right = 0;
}

if (tree->left)
{
left = 1 + binary_tree_height(tree->left);
}
else
{
left = 0;
}

return (right > left ? right : left);
}
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

/**
 * binary_tree_is_perfect - determine if the tree is perfect
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if full, otherwise 0
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int h, n;

if (!tree)
{
return (0);
}

h = binary_tree_height(tree);
n = binary_tree_size(tree);

if (n == (1 << (h + 1)) - 1)
{
return (1);
}

return (0);
}