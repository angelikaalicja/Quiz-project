#include "operating_functions.h"
#include "game.h"
#include "question.h"
#include "quiz.h"
#include <fstream>
#include <iostream>
int main(int, char*[])
{
   Game g;
   g.play();



	// bool keepPlaying = true;
	//
	// while (keepPlaying)
	// {
	// 	std::string level;
	// 	for (int i = 0; i < 10; ++i)
	// 	{
	// 		level = selectLevel();
	// 		if (level == "1" || level == "2" || level == "3")
	// 			break;
	// 		showOutput("Your choice is invalid. Choose 1, 2 or 3.\n");
	// 	}
	//
	// 	if (level == "1" || level == "2" || level == "3")
	// 	{
	// 		Quiz newQuiz(level);
	// 		std::fstream& txtQuiz = newQuiz.open();
	// 		newQuiz.load(txtQuiz);
	// 		newQuiz.close(txtQuiz);
	// 		newQuiz.play();
	// 		newQuiz.showResult();
	// 	}
	//
	// 	keepPlaying = keepingPlaying();
	// }

	return 0;
}
