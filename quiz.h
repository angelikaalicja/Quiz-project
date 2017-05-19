#ifndef QUIZ_H
#define QUIZ_H

#include "question.h"

#include <string>
#include <vector>
#include <fstream>

class Quiz
{
public:
    Quiz(const std::string& quizLevel);
    std::ifstream* open();
    void load(std::ifstream* s);
    void close(std::ifstream* s);
    void play();
    void showResult();

private:
    std::string level;
    std::string dataFile;
    std::vector<Question> questions;
    int result;
};

#endif // QUIZ_H
