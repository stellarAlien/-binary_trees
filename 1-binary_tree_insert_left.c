#include"binary_trees.h"
/**
 * binary_tree_insert_left - insert node as left chilf of another node
 * @parent: parent node
 * @value: data field
 * Return: pointer to created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;

	if (parent->left != NULL)
		(parent->left)->parent = node;
	{
		node->left = parent->left;
		parent->left = node;
	}
	return (node);
}
