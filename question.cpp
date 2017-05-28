#include "question.h"
#include "operatingfunctions.h"

#include <algorithm>


Question::Question()
{

}

void Question::setQuestion(std::string _question)
{
  question = _question;
}

void Question::setA(std::string _a)
{
  a = _a;
}

void Question::setB(std::string _b)
{
  b = _b;
}

void Question::setC(std::string _c)
{
  c = _c;
}

void Question::setD(std::string _d)
{
  d = _d;
}

void Question::setCorrectAnswer(std::string _correctAnswer)
{
  correctAnswer = _correctAnswer;
}

void Question::ask()
{
    OperatingFunctions::showOutput("\n" + question + "\n" + a + "\n" + b + "\n" + c + "\n" + d + "\n");

    OperatingFunctions::showOutput("\nPlease, type your choice: ");
    userAnswer = OperatingFunctions::getInput();
    std::transform(userAnswer.begin(), userAnswer.end(), userAnswer.begin(), tolower);

    OperatingFunctions::showOutput("Score: ");
    OperatingFunctions::showOutput(userAnswer == correctAnswer);
    OperatingFunctions::showOutput("/1\n");
}

int Question::getScore()
{
    return (userAnswer == correctAnswer);
}
