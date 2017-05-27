#ifndef PLAYER_H
# define PLAYER_H

# include "IObject.hpp"

class Player : public IObject
{
    public:
        std::string     getName();
        int             getScore();
        int             getNumOfBombs();
        int             setNumOfBoms();
        int             getDeathResistance();

        Player();
        ~Player();
        Player(Player const & src);

    private:
        std::string     name;
        int             score;
        int             num_of_bombs;
        int             death_resistance;
};

#endif