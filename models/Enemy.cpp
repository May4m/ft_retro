#include "Enemy.hpp"

Enemy::Enemy() {
    this->setGraphicalCharacter("--^--");
    return;
}

Enemy::~Enemy() {
    return;
}

Enemy::Enemy(Enemy const & src) {
    *this = src;
}

int Enemy::getDeathResistance() {
    return this->death_resistance;
}