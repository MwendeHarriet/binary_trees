#include "binary_trees.h"
/**
 * binary_tree_postorder -traverses tree in postorder traversal and
 *	sends the value of the node to a function
 * @tree: pointer to the root
 * @func: pointer to unction to call for each node
 * if tree or func is NULL do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
