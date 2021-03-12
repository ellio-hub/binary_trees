#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
binary_tree_t *x;
if (first == NULL || second == NULL)
return (NULL);
x = (binary_tree_t *)second;
while (first)
{
while (second)
if (first == second)
return ((binary_tree_t *)first);
else
second = second->parent;
second = x;
first = first->parent;
}
return (NULL);
}
