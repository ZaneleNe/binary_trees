#include "binary_trees.h"
<<<<<<< HEAD

/**
 * binary_tree_is_root - function that checks if a node is a root
 * @node: nodes is binary trees
 * Return: 1/0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
=======
/**
 * binary_tree_is_root - checking if binary tree is root
 * @node: the tree to be tested
 *
 * Return: 1 if root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	return (node->parent == NULL);

>>>>>>> 94be401c751ba1022d1e3db8c9cbd56501d1ff7a
}
