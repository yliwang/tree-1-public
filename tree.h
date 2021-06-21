#pragma once

#include "defs.h"

struct node
{
	T element;
	struct node *left, *right;
};

struct binary_tree
{
	struct node *root;
};

