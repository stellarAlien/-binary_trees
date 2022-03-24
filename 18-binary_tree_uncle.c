#include"binary_trees.h"
/**
 * binary_tree_sibling - check sibling of node
 *
 * @node: binary_tree_t *
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
/**
 * binary_tree_uncle - sibling of parent node
 *
 * @node: binary_tree_t *
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if(node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
