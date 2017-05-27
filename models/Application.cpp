
#include "Application.hpp"

Application::Application(Application const &src) {
    *this = src;
}

Application::~Application() {
    return ;
}

Application& Application::operator=(Application const &rhs)
{
    // do fields assignment here
    return *this;
}
