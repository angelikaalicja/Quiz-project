#include "operatingfunctions.h"
#include "game.h"
#include "question.h"
#include "quiz.h"
#include <gtest/gtest.h>
// #include <gmock/gmock.h>

#include <string>

extern std::string globalReturn;

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Question, getScore_OK_1)
{
	Question q;
	q.correctAnswer = "a";
	q.userAnswer = "a";
	EXPECT_EQ(1, q.getScore());
}

TEST(Question, getScore_OK_0)
{
	Question q;
	q.correctAnswer = "a";
	q.userAnswer = "b";
	EXPECT_EQ(0, q.getScore());
}

TEST(Question, getScore_FAIL)
{
	Question q;
	q.correctAnswer = "c";
	q.userAnswer = "a";
	EXPECT_NE(1, q.getScore());
}

TEST(Question, getScore_FAIL_STRING)
{
	Question q;
	q.correctAnswer = "a";
	q.userAnswer = "aa";
	EXPECT_EQ(0, q.getScore());
}

TEST(Game, selectLevel_OK)
{
	Game g;
	globalReturn = "1";
	EXPECT_EQ(globalReturn, g.selectLevel());
}
