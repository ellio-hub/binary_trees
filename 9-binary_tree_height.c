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

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftt, rightt;
if (tree == NULL || binary_tree_is_leaf(tree))
return (0);
leftt = binary_tree_height(tree->left);
rightt = binary_tree_height(tree->right);
if rightt <= leftt
return (leftt + 1);
return (rightt + 1);
}
