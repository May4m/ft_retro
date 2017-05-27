#ifndef ENEMY_H
# define ENEMY_H

#include "IObject.hpp"

class Enemy : public IObject
{
    public:
        Enemy();
        ~Enemy();
        Enemy(Enemy const & src);

        int         getDeathResistance();

    private:
        int         death_resistance;
};

#endif