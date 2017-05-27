#ifndef ENEMY_H
# define ENEMY_H


class Enemy : public IObject
{
    public:
        Enemy();

        int         getDeathResistance();

    private:
        int         death_resistance;
};

#endif