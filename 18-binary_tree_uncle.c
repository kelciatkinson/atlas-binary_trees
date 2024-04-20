#include "binary_trees.h"

/**
 * binary_tree_uncle-  finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;
	binary_tree_t *parent;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (!grandparent)
		return (NULL);

	if (parent == grandparent->left)
		return (grandparent->right);

	return (grandparent->left);
}
