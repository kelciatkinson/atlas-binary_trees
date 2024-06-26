#include "binary_trees.h"

/**
 * binary_tree_sibling- finds the sibling of a node
 *
 * @node: pointer to node to find the sibling
 *
 * Return: pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
