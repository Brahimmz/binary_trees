#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declaration*/
	binary_tree_t *newNode;

	/* make mem */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* give values */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	/* return a pointer to the node */
	return (newNode);
}
