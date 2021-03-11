#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
s = 0;
if node == NULL
return (s);
else if (node->left == NULL && node->right == NULL)
s = 1;
return (s);
}
