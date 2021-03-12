#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *t;
if (parent == NULL)
return (NULL);
t = binary_tree_node(parent, value);
if (t == NULL)
return (NULL);
t->right = parent->right;
if (t->right != NULL)
t->right->parent = t;
parent->right = t;
return (t);
}
