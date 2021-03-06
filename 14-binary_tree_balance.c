#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftt, rightt;
if (tree == NULL)
return (0);
leftt = binary_tree_height(tree->left);
rightt = binary_tree_height(tree->right);
if (rightt <= leftt)
return (leftt + 1);
return (rightt + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int r_height, l_height;
if (tree == NULL)
return (0);
r_height = binary_tree_height(tree->right);
l_height = binary_tree_height(tree->left);
return (l_height - r_height);
}
