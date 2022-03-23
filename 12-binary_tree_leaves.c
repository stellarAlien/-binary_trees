#include"binary_trees.h"
/**
 * binary_tree_leaves - number of leaves in a tree
 * @tree: root
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	i = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (i);
}
