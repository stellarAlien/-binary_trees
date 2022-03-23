#include"binary_trees.h"
/**
 *  binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node of depth to determine
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (-1);
	if (!tree->parent)
		return (i);
	else
		return (++i + binary_tree_depth(tree->parent));
	return (i);
}
