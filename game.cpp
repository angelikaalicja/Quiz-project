#include "game.h"
#include "operatingfunctions.h"
#include "quiz.h"

#include <algorithm>

Game::Game()
{

}

std::string Game::keepingPlaying()
{
        std::string playAgain;
        OperatingFunctions::showOutput("Do you want to play again or at another level? y/n\n");
        playAgain = OperatingFunctions::getInput();
        std::transform(playAgain.begin(), playAgain.end(), playAgain.begin(),
                tolower);

        return playAgain;
}

std::string Game::selectLevel()
{
    std::string level;
    OperatingFunctions::showOutput("Select level: 1/2/3\n");
    level = OperatingFunctions::getInput();
    return level;
}

void Game::play()
{
    bool keepPlaying = true;

    while (keepPlaying)
    {
        std::string level;
        for (int i = 0; i < 10; ++i)
        {
            level = selectLevel();
            if (level == "1" || level == "2" || level == "3")
                break;
            OperatingFunctions::showOutput("Your choice is invalid. Choose 1, 2 or 3.\n");
        }

        if (level == "1" || level == "2" || level == "3")
        {
            Quiz newQuiz(level);
            std::ifstream* txtQuiz = newQuiz.open();
            newQuiz.load(txtQuiz);
            newQuiz.close(txtQuiz);
            newQuiz.play();
            newQuiz.showResult();
        }

        std::string playAgain;
        for (int i = 0; i < 10; ++i)
        {
            playAgain = keepingPlaying();
            if (playAgain == "y" || playAgain == "n")
                break;
            OperatingFunctions::showOutput("Your choice is invalid. Choose y or n.\n");
        }

        if (playAgain != "y")
        {
           keepPlaying = false;
           OperatingFunctions::showOutput("Gameover!\n");
        }
    }
}
