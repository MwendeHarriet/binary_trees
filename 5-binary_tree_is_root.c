#include "binary_trees.h"
/**
 * binary_tree_is_root -checks if node is root i.e. has parent
 * @node: pointer to the node to check
 * Return: 1 if root, 0 if not
 *	if node is NULL return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
