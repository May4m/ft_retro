
#ifndef APPLICATION_H
# define APPLICATION_H

# include <ncurses.h>
# include <iostream>
# include "GameArena.hpp"

class Application
{
    public:
        Application();
        ~Application();
        Application(std::string title);
        Application(Application const &src);
        Application& operator=(Application const &rhs);

        int         screen_width;
        int         screen_height;
        std::string title;
        std::string description;
        GameArena   environment;

        void        setGameDescription(std::string desc);
        void        startGame();

    private:
        void _initNCurses();
        void _gameLoop(int signal);
};

#endif
