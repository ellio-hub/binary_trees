#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
int s = 0;
if (node == NULL)
return (s);
else if (node->left == NULL && node->right == NULL)
s = 1;
return (s);
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t r_height, l_height;
if (tree == NULL || binary_tree_is_leaf(tree) == 1)
return (0);
r_height = binary_tree_nodes(tree->right);
l_height = binary_tree_nodes(tree->left);
return (r_height + l_height + 1);
}
