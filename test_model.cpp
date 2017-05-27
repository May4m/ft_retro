#include "models/Player.hpp"
#include "models/Vector.hpp"
#include "models/Enemy.hpp"
#include "models/Player.hpp"
#include "models/Ammunition.hpp"

int main()
{
    Vector a(2, 2);
    Vector b(3, 2);

    Player A("Sizwe");
    A.reduceLife(1);

    std::cout << A.getLives() << std::endl;
    return 0;
}