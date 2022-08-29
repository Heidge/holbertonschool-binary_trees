#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - créates a new node in right branch of binary tree
 *
 * @parent: parent of the new node
 * @value: value in new node
 * Return: the node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->right = parent->right;
	new_node->left = NULL;
	new_node->parent = parent;
	new_node->n = value;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;
	return (new_node);
}
