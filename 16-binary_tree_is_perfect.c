#include"binary_trees.h"
/**
 *binary_tree_is_leaf - checks if a node in a bt is a leaf
 * @node: node to check if leaf
 * Return: 1 if leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right || node->left)
		return (0);
	return (1);
}
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

/**
 * binary_tree_height - checks height of binary tree
 * @tree: root of tree
 * Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (1 + left);
	return (1 + right);
}
/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree:  binary_tree_t
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (tree == NULL)
		return (0);
	l = tree->left;
	r = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (l == NULL || r == NULL)
		return (0);
	if (binary_tree_height(l) == binary_tree_height(r))
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
			return (1);
	}
	return (0);
}
