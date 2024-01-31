#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: nodes is binary trees
 * Return: 1 if node is a leaf, otherwise 0.
=======
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
>>>>>>> 94be401c751ba1022d1e3db8c9cbd56501d1ff7a
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
