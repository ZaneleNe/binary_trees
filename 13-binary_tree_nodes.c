#include "binary_trees.h"

/**
 * binary_tree_nodes -  function that counts the leaves in a binary tree
 * @tree:  pointer node binary tree
 * Return:  Number the leaves in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);
}
