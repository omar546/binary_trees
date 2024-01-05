#include "binary_trees.h"

/**
 * goes through a binary tree using in-order traversal
 *
 * @tree: a pointer to the root node of the tree
 * @func: a pointer to a function to call for each node
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
    {
		return;
    }

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
