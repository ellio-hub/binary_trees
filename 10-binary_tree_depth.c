#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of the node
 * @tree: pointer to the node to measure the depth
 *
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t w = 0;
if tree == NULL
return (0);
while (tree->parent)
{
w++;
tree = tree->parent;
}
return (w);
}
