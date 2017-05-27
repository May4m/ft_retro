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

std::string IObject::getGraphicalCharacter() {
    return this->graphical_charactor;
}

void        IObject::setGraphicalCharacter(std::string graf) {
    this->graphical_charactor = graf;
}