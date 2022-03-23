#include"binary_trees.h"
/**
 * binary_tree_size - count nodes in tree
 * @tree: root
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		left_count = binary_tree_size(tree->left);
	}
		right_count = binary_tree_size(tree->right);

	return (left_count + right_count + 1);
}
