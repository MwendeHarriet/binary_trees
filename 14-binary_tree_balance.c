#include "binary_trees.h"
/**
 * binary_tree_height_forbalance -measuresheight of a binary tree
 * Description: a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: height or 0 if tress is NULL
 */
size_t binary_tree_height_forbalance(const binary_tree_t *tree)
{
	size_t left_side = 0;

	size_t right_side = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_side = tree->left ? 1 + binary_tree_height_forbalance(tree->left) : 1;
			right_side = tree->right ? 1 + binary_tree_height_forbalance
				(tree->right) : 1;
		}
		return ((left_side > right_side) ? left_side : right_side);
	}
}

/**
 * binary_tree_balance -calculates balance factor of a binary tree
 * @tree: binary tree to calculate
 * Return: 0 if tree is Null or balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;

	int right_height = 0;

	int result = 0;

	if (tree)
	{
		left_height = ((int)binary_tree_height_forbalance(tree->left));
		right_height = ((int)binary_tree_height_forbalance(tree->right));
		result = left_height - right_height;

	}
	return (result);
}
