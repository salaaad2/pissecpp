#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde {
    Zombie*	_horde;
    public:
        ZombieHorde(int n);
        ~ZombieHorde();
        void announce(int number) const ;
};

#endif // ZOMBIEHORDE_H
