#include "binary_trees.h"
/**
 * binary_tree_node - it creates a binary tree node
 *
 * @parent: the pointer to the parent of the node
 * @value: the value to be puted on the new node
 *
 * Return: NULL if it fails, a pointer to the new node if else
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
