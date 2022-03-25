#include"binary_trees.h"
/**
 *  binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node of depth to determine
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
