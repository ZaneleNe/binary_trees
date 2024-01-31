#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_postorder - traverses a tree in post-order calling func
 * @tree: const pointer to root node to begin traversal at
 * @func: function to call on tree node's data
=======
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
>>>>>>> 94be401c751ba1022d1e3db8c9cbd56501d1ff7a
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
