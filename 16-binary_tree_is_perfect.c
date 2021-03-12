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
if (rightt <= leftt)
return (leftt + 1);
return (rightt + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
binary_tree_t *r_leaf, *l_leaf;
size_t r_height, l_height;
int s = 0;
if (tree == NULL)
return (s);
if (binary_tree_is_leaf(tree))
return (1);
r_leaf = tree->right;
l_leaf = tree->left;
if (r_leaf == NULL || l_leaf == NULL)
return (s);
r_height = binary_tree_height(r_leaf);
l_height = binary_tree_height(l_leaf);
if (r_height == l_height)
if (binary_tree_is_perfect(r_leaf) && binary_tree_is_perfect(l_leaf))
s = 1;
return (s);
}
