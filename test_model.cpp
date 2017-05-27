#include "models/Player.hpp"
#include "models/Vector.hpp"
#include "models/Enemy.hpp"
#include "models/Player.hpp"
#include "models/Ammunition.hpp"

int main()
{
    Player A("Sizwe");
    Player B("Simba");


    A.reduceLife(B.shootBomb());
    std::cout << A.getLives() << std::endl;
    return 0;
}