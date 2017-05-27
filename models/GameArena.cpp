
#include "GameArena.hpp"

GameArena::GameArena() : index(0) {
    this->game_objects = new IObject[200];
}

GameArena::GameArena(int len) : length(len), index(0){
    this->game_objects = new IObject[len];
}

GameArena::GameArena(GameArena const &src) {
    *this = src;
}

GameArena::~GameArena() {
    delete[] this->game_objects;
    std::cout << "GameArena: destroyed\n";
    return ;
}

GameArena& GameArena::operator=(GameArena const &rhs)
{
    (void)rhs;
    return *this;
}


void GameArena::addObject(IObject& obj)
{
    if (index < length) {
        this->game_objects[++index] = obj;
    } else {
        throw "Maximum number of objects reached";
    }
}