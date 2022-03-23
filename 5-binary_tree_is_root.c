#include"binary_trees.h"
/**
*binary_tree_is_root - checks if node is root
*@node: node to check
*Return: 1 if root else 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);
	else if (node->parent == NULL)
		return (1);
	return (0);
}
