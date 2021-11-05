#include <iostream>

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int
main(void) {
    ZombieHorde * horde = new ZombieHorde(18);

    delete horde;
    return (0);
}
