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
        int             getLives();
        float           is_alive;

        // modelling player behaviour
        void            reduceLife(int delta);
        int             shootBullet();
        int             shootBomb();

        // template
        Player();
        ~Player();
        Player(std::string name);
        Player(Player const & src);
        Player& operator=(Player const &rhs);
        
    private:
        std::string     name;
        int             score;
        int             num_of_bombs;
        int             num_of_lives;
        
};

#endif