#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_print - Prints a binary tree using in-order traversal
 * @tree: A pointer to the root node of the tree to print
 * @depth: Depth of the current node in the tree
 */
void binary_tree_print(const binary_tree_t *tree, int depth)
{
	if (tree == NULL)
		return;

	depth += 4;

	binary_tree_print(tree->right, depth);
	printf("%*s%d\n", depth, "", tree->n);
	binary_tree_print(tree->left, depth);
}
