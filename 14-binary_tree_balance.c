#include "binary_trees.h"
/**
 * binary_tree_height -measuresheight of a binary tree
 * Description: a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: height or 0 if tress is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;

	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height);
	return (right_height);
}

/**
 * binary_tree_balance -calculates balance factor of a binary tree
 * @tree: binary tree to calculate
 * Return: 0 if tree is Null or balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;

	int right = 0;

	int total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
