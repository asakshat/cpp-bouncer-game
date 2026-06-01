#pragma once

#include <SFML/Graphics.hpp>

class Player {
 private:
  sf::RectangleShape shape_;
  float speed_;

 public:
  Player();
  void Draw(sf::RenderWindow& window) const;
  void Move(float dt);
};