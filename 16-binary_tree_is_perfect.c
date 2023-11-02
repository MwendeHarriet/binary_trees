#include "binary_trees.h"
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
 * binary_tree_size -measures the size of a binary tree
 * @tree: tree to measure the size of
 * * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 *custom_power -calculates power of a number recursively
 *@base: value to exponent
 *@exponent: power to raise base to
 *Return: base power of exponent or -1 if exponent is negative
 */

int custom_power(int base, int exponent)
{
	if (exponent < 0)
		return (-1);
	if (exponent == 0)
		return (1);
	else
		return (base * custom_power(base, exponent - 1));

}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: 1 if the tree is perfect or 0 if the tree is not perfect
 *	or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_height = 0;
	size_t tree_nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	tree_height = binary_tree_height(tree);
	tree_nodes = binary_tree_size(tree);

	power = (size_t)custom_power(2, tree_height + 1);
	return (power - 1 == tree_nodes);
}
