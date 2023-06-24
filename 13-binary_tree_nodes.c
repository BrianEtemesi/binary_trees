#include "binary_trees.h"

/**
 * tree_is_parent - checks if a node is a parent
 *
 * @node: pointer to the node to check
 * Return: 1 if node is a parent, otherwise 0
 */

int tree_is_parent(const binary_tree_t *node)
{
	int parent = 0;

	if (node && (node->left || node->right))
		parent = 1;

	return (parent);
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to root node
 * Return: number of parent nodes in a the tree, 0 if tree is NULL;
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree_is_parent(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
