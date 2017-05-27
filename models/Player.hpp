#ifndef PLAYER_H
# define PLAYER_H

# include "IObject.hpp"

class Player : public IObject
{
    public:
        std::string     getName();
    private:
        std::string name;
};
#endif