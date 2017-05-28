#ifndef QUESTION_H
#define QUESTION_H

#include <gtest/gtest_prod.h>

#include<string>

class Question
{
public:
    Question();
    void setQuestion(std::string _question);
    void setA(std::string _a);
    void setB(std::string _b);
    void setC(std::string _c);
    void setD(std::string _d);
    void setCorrectAnswer(std::string _correctAnswer);
    void ask();
    int getScore();

private:  
    std::string question, a, b, c, d;
    std::string correctAnswer;
    std::string userAnswer;

    FRIEND_TEST(Question, getScore_OK_1);
    FRIEND_TEST(Question, getScore_OK_0);
    FRIEND_TEST(Question, getScore_FAIL);
    FRIEND_TEST(Question, getScore_FAIL_STRING);
};

#endif // QUESTION_H
