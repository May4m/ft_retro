#include "Player.hpp"

Player::Player() : num_of_lives(4) {
    return;
}

Player::Player(std::string name) : num_of_lives(4), name(name) {
    return ;
}

Player::~Player() {
    return;
}

Player::Player(Player const & src)
{
    *this = src;
    return;
}

std::string Player::getName() {
    return this->name;
}

int         Player::getLives() {
    return this->num_of_lives;
}

int         Player::getScore() {
    return this->score;
}

int         Player::getNumOfBombs() {
    return this->num_of_bombs;
}

int         Player::setNumOfBoms() {
    return this->num_of_bombs;
}

Player& Player::operator=(Player const &rhs)
{
    this->name = rhs.name;
    this->score = rhs.score;
    this->num_of_bombs = rhs.num_of_bombs;
    return *this;
}