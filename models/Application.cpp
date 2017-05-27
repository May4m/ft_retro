
#include "Application.hpp"
#include "Player.hpp"

Application::Application(std::string title) : title(title)
{
    getmaxyx(stdscr, this->screen_width, this->screen_height);  // set screen width and height
    this->environment = GameArena(600);
    std::cout << "created" << std::endl;
    Player player = Player("Sizwe");

    this->environment.addObject(player);
}

Application::Application(Application const &src) {
    *this = src;
}

Application::~Application() {
    std::cout << "deleted" << std::endl;
    endwin();
    return ;
}

Application& Application::operator=(Application const &rhs)
{
    // do fields assignment here
    (void)rhs;
    return *this;
}

void Application::_initNCurses() {
    initscr();
    clear();
    noecho();
    cbreak();  // receive keyboard signals on press 
    keypad(stdscr, TRUE);  // enable keyboard keys
    curs_set(0);  // don't show the cursor
}

void Application::setGameDescription(std::string _desc) {
    this->description = _desc;
}

void Application::startGame() {
    int input = getch();
    _gameLoop(input);
}

void Application::_gameLoop(int signal) {
    while (signal != 27  || signal != 'q') {

    }
}