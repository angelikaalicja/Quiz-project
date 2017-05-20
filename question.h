#ifndef QUESTION_H
#define QUESTION_H

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

//private:
    std::string question, a, b, c, d;
    std::string correctAnswer;
    std::string userAnswer;
};

#endif // QUESTION_H
