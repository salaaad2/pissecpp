#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int
main(void) {
    Zombie zominit = Zombie("salad", "green");
    zominit.advert();

    ZombieEvent * zomEvent = new ZombieEvent();
    zomEvent->setZombieType("BLACK");

    Zombie * coolzombie = zomEvent->newZombie("richard");
    coolzombie->advert();

    Zombie * coolerzombie = zomEvent->newZombie("peter");
    coolerzombie->advert();
    zomEvent->setZombieType("tank");

    Zombie * coolestzombie = zomEvent->newZombie("chad");
    coolestzombie->advert();

    Zombie * random = zomEvent->randomChump();

    delete coolzombie;
    delete coolerzombie;
    delete coolestzombie;
    delete random;
    return (0);
}
