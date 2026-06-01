#pragma once

#include <SFML/Graphics.hpp>

#include "Player.hpp"

class Game {
 private:
  sf::RenderWindow window_;
  sf::Clock clock_;
  Player player_;

 public:
  Game();
  bool IsRunning() const;

  void ProcessEvents();
  void Update();
  void Render();
};
