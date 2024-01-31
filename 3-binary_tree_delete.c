#include "binary_trees.h"
<<<<<<< HEAD

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: binary tree
 * Returns: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
=======
/**
 * binary_tree_delete - delete an entire tree
 * @tree: the tree to be removed
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;
>>>>>>> 94be401c751ba1022d1e3db8c9cbd56501d1ff7a
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
