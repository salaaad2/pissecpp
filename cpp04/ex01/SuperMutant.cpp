#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(150, "SuperMutant") {
    std::cout << "Gaaah. Break Everything!" << std::endl;
    return ;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(150, "SuperMutant") {
    *this = src;
    return ;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaaargh..." << std::endl;
    return ;
}

void
SuperMutant::takeDamage(int damage) {
    damage -= (damage > 3) ? 3 : 0;

    if (damage < this->getHP() && damage > 0)
    {
        this->setHP(this->getHP() - (damage));
    }
    else if (damage > this->getHP())
    {
        this->setHP(0);
    }
    else {
        std::cout << "Missed" << std::endl;
    }
}

SuperMutant & SuperMutant::operator=(SuperMutant const &rhs) {
    this->setType(rhs.getType());
    this->setHP(rhs.getHP());
    return (*this);
}
