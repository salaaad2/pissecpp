////////////////////////////
// FMOENNE ZOMBIEEVENT.CPP//
////////////////////////////

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent() {
    std::cout << "ZEVENT CONSTRUCTOR CALLED" << std::endl;
}

ZombieEvent::~ZombieEvent() {
    std::cout << "ZEVENT DESTRUCTOR CALLED" << std::endl;
}

Zombie *
ZombieEvent::randomChump(void) {
    std::string	nameList[6] = {"Pierre", "Paul", "Jaques", "Jean", "Arthur", "Jules"};
    int			rIndex;
    Zombie *		randomZombie;

    srand(time(NULL));
    rIndex = std::rand() % 6;
    randomZombie = newZombie(nameList[rIndex]);
    randomZombie->advert();
    return (randomZombie);
}

Zombie *
ZombieEvent::newZombie(std::string name) const {
    Zombie * coolzombie = new Zombie(name, this->_stype);

    return (coolzombie);
}

std::string
ZombieEvent::getZombieType(void) const {
    return (this->_stype);
}

void
ZombieEvent::setZombieType(std::string type) {
    this->_stype = type;
}
