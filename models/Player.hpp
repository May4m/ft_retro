#ifndef PLAYER_H
# define PLAYER_H

# include "IObject.hpp"

class Player : public IObject
{
    public:
        std::string     getName();
        int             getScore();

    private:
        std::string     name;
        int             score;
        int             num_of_bombs;
};

#endif