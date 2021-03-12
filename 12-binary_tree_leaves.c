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
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t r_height, l_height;
if (tree == NULL)
return (0);
if (binary_tree_is_leaf(tree))
return (1);
r_height = binary_tree_leaves(tree->right);
l_height = binary_tree_leaves(tree->left);
return (r_height + l_height);
}
