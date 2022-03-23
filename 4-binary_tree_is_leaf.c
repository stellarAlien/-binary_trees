#include"binary_trees.h"
/**
 *binary_tree_is_leaf - checks if a node in a bt is a leaf
 * @node: node to check if leaf
 * @return 1 if leaf else 0
 * Return: 1 if leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right || node->left  || node == NULL)
		return (0);
	return (1);
}
