#include "Ammunition.hpp"


Ammunition::Ammunition(int _life_delta) : life_delta(_life_delta) {
    return ;
}

Ammunition::Ammunition() : life_delta(1) {
    return ;
}

Ammunition::Ammunition(Ammunition const &src) {
    *this = src;
}

Ammunition::~Ammunition() {
    return ;
}

Ammunition& Ammunition::operator=(Ammunition const &rhs)
{
    this->life_delta = rhs.life_delta;
    return *this;
}

int Ammunition::getLifeDelta() const {
    return life_delta;
}
