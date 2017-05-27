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

        // modelling player behaviour
        void            reduceLife(int delta);
        int             shootBullet();
        int             shootBomb();

        Player();
        ~Player();
        Player(Player const & src);

        Player& operator=(Player const &rhs);
        

    private:
        std::string     name;
        int             score;
        int             num_of_bombs;
        int             num_of_lives;
};

#endif