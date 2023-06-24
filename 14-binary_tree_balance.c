#include "binary_trees.h"

/**
 * rec_height - measures the height of a binary tree recursively
 *
 * @tree: tree root
 * Return: height
 */

size_t rec_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = rec_height(tree->left);
	right = rec_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_height - calls rec_height to return the height
 * of a binary tree
 *
 * @tree: tree root
 * Return: height of the tree or 0 if tree is NULL;
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (rec_height(tree) - 1);
}

/**
 * binary_tree_balance - calls recursive_balance to return the balance
 * of a binary tree
 *
 * @tree: tree root
 * Return: balance factor of the tree or 0 if tree is NULL;
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
