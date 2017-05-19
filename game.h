#ifndef GAME_H
#define GAME_H

#include <string>

class Game
{
public:
    Game();
    void play();
    std::string keepingPlaying();
    std::string selectLevel();
};

#endif // GAME_H
