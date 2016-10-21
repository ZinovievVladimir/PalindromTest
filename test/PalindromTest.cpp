#include <gtest/gtest.h>
#include "palindrom.h"

TEST(Palindrom, Palindrom)
{
	const int nodes_count = 5;
	CNode nodes[nodes_count];
	int vals[nodes_count] = { 1,2,3,2,1 };
	for (int i = 0; i < nodes_count - 1; ++i) {
		nodes[i].next = &(nodes[i + 1]);
		nodes[i].data = vals[i];
	}

	nodes[nodes_count - 1] = vals[nodes_count - 1];

	EXPECT_TRUE(is_palindrom(nodes));
}

TEST(Palindrom, EmptyList) {
	EXPECT_TRUE(is_palindrom(0));
}

TEST(Palindrom, OneNode) {
	CNode node(3);
	EXPECT_TRUE(is_palindrom(&node));
}

TEST(Palindrom, NotPalindrom)
{
	const int nodes_count = 5;
	CNode nodes[nodes_count];
	for (int i = 0; i < nodes_count - 1; ++i) {
		nodes[i].next = &(nodes[i + 1]);
		nodes[i].data = i;
	}

	EXPECT_FALSE(is_palindrom(nodes));
}
