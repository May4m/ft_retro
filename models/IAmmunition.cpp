#include "IAmmunition.hpp"


IAmmunition::IAmmunition(int _life_delta) : life_delta(_life_delta) {
    return ;
}

IAmmunition::IAmmunition() : life_delta(1) {
    return ;
}

int IAmmunition::getLifeDelta() const {
    return life_delta;
}