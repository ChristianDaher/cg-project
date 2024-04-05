#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int width, int height);
    void update();
    void handleInput(int key);
    void render();

private:
    int width, height;
    // Add other member variables as needed
};

#endif
