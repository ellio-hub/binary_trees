
#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t  *t;
t = malloc(sizeof(binary_tree_t));
if t == NULL
return (NULL);
t->parent = parent;
t->left = NULL;
t->right = NULL;
t->n = value;
return (t);
}
