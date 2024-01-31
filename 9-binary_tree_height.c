#include "binary_trees.h"
<<<<<<< HEAD

/**
 * binary_tree_height -  gets the height of a binary tree
 * @tree: root node to draw height from for tree
 * Return: size_t representing height, 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((lef > rig) ? lef : rig);
	}

	return (0);
=======
/**
 * binary_tree_height - the height of the binary tree
 * @tree: the binary tree
 * Return: 0 for NULL root
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return ((l_height > r_height ? l_height : r_height) + 1);
>>>>>>> 94be401c751ba1022d1e3db8c9cbd56501d1ff7a
}
