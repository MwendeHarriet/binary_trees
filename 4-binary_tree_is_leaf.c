#include "binary_trees.h"
/**
 * binary_tree_is_leaf -checks if node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if leaf, 0 if not or if node is
 *	NULL return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
