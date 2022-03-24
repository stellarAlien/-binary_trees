#include"binary_trees.h"
/**
 * binary_tree_height - checks height of binary tree
 * @tree: root of tree
 * Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		if (tree->right && !tree->left)
			return (++i + binary_tree_height(tree->right));
		else
			return (++i + binary_tree_height(tree->left));
	}
	return (i);
}
