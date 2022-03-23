#include"binary_trees.h"
 void binary_tree_delete(binary_tree_t *tree)
 {
	 binary_tree_t *rn, *rl;
	 if(!tree)
		return;
	rn = tree->right;
	rl = tree->left;
	binary_tree_delete(rn);
	binary_tree_delete(rl);
 }