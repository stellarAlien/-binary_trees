#include"binary_trees.h"
/**
 * binary_tree_preorder - traverse tree in pre-order traversal
 * @tree: root node
 * @func: pointer to func
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !tree->n || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left,  func);
	binary_tree_preorder(tree->right,  func);
}
