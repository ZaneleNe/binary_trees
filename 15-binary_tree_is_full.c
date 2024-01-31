#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
int is_full_recursive(const binary_tree_t *tree);

/**
 * is_full_recursive -  A function that checks if a binary tree is full.
 * @tree:  A pointer to the root node of the tree.
 * Return: 1 if tree is full or 0 in otherwise.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)

			return (0);
	}

	return (1);
}

/**
 * binary_tree_is_full -  A function that checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree.
 * Return:  1 if tree is full or 0 in otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
