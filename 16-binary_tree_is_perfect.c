#include "binary_trees.h"
/**
 * binary_tree_is_perfect- checks if a binary tree is perfect
 * 
 * @tree: pointer to the root node of the tree to check
 * 
 * Return: 1 if binary tree is perfect, else 0
 */ 

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if ((binary_tree_balance(tree)) == 0)
		return (1);

	return (0);
}

/**
 * binary_tree_balance- measures the balance factor of a binary tree
 *
 * @tree: pointer to the root nodd of the tree to measure the balance factor
 *
 * Return: the balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t balance = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	balance = left_height - right_height;

	return (balance);
}

/**
 * binary_tree_height-measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}
