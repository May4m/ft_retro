#include "Player.hpp"

Player::Player() {
    return;
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

int         Player::getScore() {
    return this->score;
}

int         Player::getNumOfBombs() {
    return this->num_of_bombs;
}

int         Player::setNumOfBoms() {
    return this->num_of_bombs;
}