#include "binary_trees.h"
<<<<<<< HEAD

/**
 * binary_tree_inorder - traverses a tree in in-order calling func
 * @tree: const pointer to root node to begin traversal at
 * @func: function to call on tree node's data
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
=======
/**
 * binary_tree_inorder - return binary tree inorder
 * @tree: a binary tree
 * @func: a function call to traverse the node value
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
>>>>>>> 94be401c751ba1022d1e3db8c9cbd56501d1ff7a
}
