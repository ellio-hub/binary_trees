#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 0 if tree is NULL else the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t r_height, l_height;
if tree == NULL
return (0);
r_height = binary_tree_size(tree->right);
l_height = binary_tree_size(tree->left);
return (r_height + l_height + 1);
}
