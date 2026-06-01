#include "Player.hpp"

#include <algorithm>

Player::Player() : shape_({120, 20}), speed_(750) {
  shape_.setFillColor(sf::Color::Blue);
  shape_.setOrigin(shape_.getGeometricCenter());
  shape_.setPosition({600 * 0.50f, 800 * 0.85f});
}

void Player::Draw(sf::RenderWindow& window) const { window.draw(shape_); }

void Player::Move(float dt) {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
    shape_.move({-speed_ * dt, 0});
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
    shape_.move({speed_ * dt, 0});
  }
  float halfWidth = shape_.getSize().x / 2;
  float x = std::clamp(shape_.getPosition().x, halfWidth, 600 - halfWidth);
  shape_.setPosition({x, shape_.getPosition().y});
}
