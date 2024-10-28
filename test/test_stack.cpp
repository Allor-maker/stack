#include <gtest.h>
#include "stack.h"
#include <vector>

TEST(Stack, can_create_stack)
{
	std::vector<int> a = { 1,2,3,4,5 };
	Stack<std::vector,int> S(a);

	EXPECT_EQ(S.top(), 5);
}

TEST(Stack, can_push_elem)
{
	std::vector<int> a = { 1,2,3,4,5 };
	Stack<std::vector, int> S(a);

	int A = 10;
	S.push(A);

	EXPECT_EQ(S.top(), 10);
}

TEST(Stack, can_pop_elem)
{
	std::vector<int> a = { 1,2,3,4,5 };
	Stack<std::vector, int> S(a);

	S.pop();

	EXPECT_EQ(S.top(), 4);
}

TEST(Stack, can_show_top_elem)
{
	std::vector<int> a = { 1,2 };
	Stack<std::vector, int> S(a);

	EXPECT_EQ(S.top(), 2);

	S.pop();
	EXPECT_EQ(S.top(), 1);

	S.push(100);
	EXPECT_EQ(S.top(), 100);
}

TEST(Stack, can_check_that_stack_is_empty)
{
	std::vector<int> a = { };
	Stack<std::vector, int> S(a);

	EXPECT_EQ(S.empty(), true);
}
TEST(Stack, can_clear_stack)
{
	std::vector<int> a = { 1,2,3,4,5 };
	Stack<std::vector, int> S(a);

	S.clear();
	EXPECT_EQ(S.empty(), true);
}

TEST(Stack, can_return_size)
{
	std::vector<int> a = { 1,2,3,4,5 };
	Stack<std::vector, int> S(a);

	EXPECT_EQ(S.size(), 5);
}