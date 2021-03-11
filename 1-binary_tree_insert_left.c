#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *t;
if parent == NULL
return (NULL);
t = binary_tree_node(parent, value);
if t == NULL
return (NULL);
t->left = parent->left;
if t->left != NULL
t->left->parent = t;
parent->left = t;
return (t);
}
