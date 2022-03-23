#include"binary_trees.h"
/**
 * binary_tree_insert_left - insert node as left chilf of another node
 * @parent: parent node
 * @value: data field
 * Return: pointer to created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node, *aux;

    node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    node->parent = parent;
    node->right = NULL;
    node->left = NULL;
    node->n = value;
    if(parent == NULL)
    {
        return NULL;
    }
    else if(parent->left != NULL)
    {
        aux = (binary_tree_t *)malloc(sizeof(binary_tree_t));
        aux = parent->left;
        parent->left = node;
        node->left = aux;
        aux->parent = node;
    }
    else
    {
        parent->left = node;
    }
return node;
}