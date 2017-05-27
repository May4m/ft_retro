
#ifndef GAMEARENA_H
# define GAMEARENA_H


class GameArena
{
    public:
        GameArena();
        ~GameArena();
        GameArena(GameArena const &src);
        GameArena& operator=(GameArena const &rhs);
};

#endif
