#include "IObject.hpp"

IObject::IObject() {
    return;
}

IObject::~IObject() {
    return;
}

IObject::IObject(IObject const & src) {
    *this = src;
}

IObject& IObject::operator=(IObject const &rhs) {
    (void)rhs;
    return *this;
}

std::string IObject::getGraphicalCharacter() {
    return this->graphical_charactor;
}

void    IObject::setGraphicalCharacter(std::string graf) {
    this->graphical_charactor = graf;
}

void    IObject::move(Vector delta) {
    this->pos = this->pos + delta;
}

void    IObject::moveX(int x) {
    this->move(Vector(x, 0));
}

void    IObject::moveY(int y) {
    this->move(Vector(0, y));
}