#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_preorder - traverses a tree with a pre-order calling func.
 * @tree: const pointer to root node to begin traversal at.
 * @func: function to call on tree node's data.
=======
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
>>>>>>> 94be401c751ba1022d1e3db8c9cbd56501d1ff7a
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
