
#ifndef GAMEARENA_H
# define GAMEARENA_H

# include "IObject.hpp"


class GameArena
{
    public:
        GameArena();
        ~GameArena();
        GameArena(int len);
        GameArena(GameArena const &src);
        GameArena& operator=(GameArena const &rhs);

        void    addObject(IObject &obj);

        IObject *game_objects;

    private:
        ; // array of IObjects
        int     length;
        int     index;
};

#endif
