#include"binary_trees.h"
/**
 * binary_tree_insert_right - insert a node to the right
 * @parent: parent node
 * @value: data field
 * Return: new node adress or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;

	if (parent->right != NULL)
		(parent->right)->parent = node;
	{
		node->right = parent->right;
		parent->right = node;
	}
	return (node);
}
