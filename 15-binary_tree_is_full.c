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
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int r_leaf, l_leaf, s = 0;
if (tree == NULL)
return (s);
if (binary_tree_is_leaf(tree) != 0)
return (1);
r_leaf = binary_tree_is_full(tree->right);
l_leaf = binary_tree_is_full(tree->left);
if (r_leaf == 0 || l_leaf == 0)
return (s);
return (1);
}
