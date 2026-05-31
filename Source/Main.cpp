#include "Game.hpp"

int main() {
  Game game;

  while (game.IsRunning()){
    game.ProcessEvents();
    game.Update();
    game.Render();
  }
}
