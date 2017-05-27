#ifndef AMMUNITION_H
# define AMMUNITION_H

# include "IObject.hpp"

class Ammunition : public IObject
{
    public:
        Ammunition(Ammunition const &src);
        Ammunition(int life_delta);
        Ammunition();
        ~Ammunition();
        
        Ammunition& operator=(Ammunition const &rhs);

        int     getLifeDelta() const;

    private:
        int     life_delta; // number of times the ammunition can be fired to kill the player
};

#endif