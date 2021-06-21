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

/* interface declaration */
struct node *build_tree( T v, struct node *left_child, struct node *right_child );
struct node *empty_tree();

int size( struct node *t );
int height( struct node *t );

bool is_empty( struct node *t );
bool is_containing( struct node *t, T v );

T root_value( struct node *t );

struct node *left_subtree( struct node *t );
struct node *right_subtree( struct node *t );



