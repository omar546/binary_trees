#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 *
 * @tree: apointer to the node to measure
 *
 * Return: depth of the tree
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;

if (!tree)
{
return (0);
}

if (tree->parent)
{
depth = 1 + binary_tree_depth(tree->parent);
}
else
{
depth = 0;
}

return (depth);
}
