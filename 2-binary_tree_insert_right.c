#include"binary_trees.h"
/**
 * binary_tree_insert_right - insert a node to the right
 * @parent: parent node
 * @value: data field
 * Return: new node adress or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
    else if(parent->right != NULL)
    {
        aux = (binary_tree_t *)malloc(sizeof(binary_tree_t));
        aux = parent->right;
        parent->right = node;
        node->right = aux;
        aux->parent = node;
    }
    else
    {
        parent->right = node;
    }
return node;
}
