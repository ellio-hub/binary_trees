#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node == node->parent->right)
return (node->parent->left);
else
return (node->parent->right);
}
