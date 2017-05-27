
#ifndef APPLICATION_H
# define APPLICATION_H


class Application
{
    public:
        Application();
        ~Application();
        Application(Application const &src);
        Application& operator=(Application const &rhs);
};

#endif
