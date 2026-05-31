#include "Game.hpp"

Game::Game():
    window_(sf::VideoMode({600,800}),"Bouncer")
{
    window_.setVerticalSyncEnabled(true);
}

bool Game::IsRunning() const {
    return window_.isOpen();
}

void Game::ProcessEvents(){
    while(std::optional<sf::Event> event = window_.pollEvent()){
        if (event->is<sf::Event::Closed>()){
            window_.close();
        }
    }
}

void Game::Update(){

}

void Game::Render(){
    window_.clear();
    window_.display();
}