#include "quiz.h"

#include "question.h"
#include "operating_functions.h"


Quiz::Quiz(const std::string& quizLevel)
    : level(quizLevel)
{
	dataFile = "quiz_" + level + ".txt";
}

std::ifstream* Quiz::open()
{
  std::ifstream* s = new std::ifstream;
  s->open(dataFile.c_str());

  if(s->good()==false)
  {
     showOutput("Ups! Data file is missing!\n");
     return nullptr;
  }

  return s;
}

void Quiz::load(std::ifstream* s)
{
  unsigned int readline = 0;
  std::string line;

  while(getline(*s, line))
  {
    if(readline % 6 == 0)
    {
    questions.push_back(Question());
    questions.back().setQuestion(line);
    }
    if(readline % 6 == 1)
    {
      questions.back().setA(line);
    }
    if(readline % 6 == 2)
    {
      questions.back().setB(line);
    }
    if(readline % 6 == 3)
    {
      questions.back().setC(line);
    }
    if(readline % 6 == 4)
    {
      questions.back().setD(line);
    }
    if(readline % 6 == 5)
    {
      questions.back().setCorrectAnswer(line);
    }

    readline++;
  }
}


void Quiz::close(std::ifstream* s)
{
  s->close();
  delete s;
}

void Quiz::play()
{
    showOutput("\nPlaying! Level: " + level + "\n");

    result = 0;
    for (auto q : questions)
    {
        q.ask();
        result += q.getScore();
    }
}

void Quiz::showResult()
{
    showOutput("\nResult: ");
    showOutput(result);
    showOutput("/");
    showOutput(questions.size());
    showOutput("\n");
}
