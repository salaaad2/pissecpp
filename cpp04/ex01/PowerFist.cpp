#include "PowerFist.hpp"

PowerFist::PowerFist(void) :
    AWeapon("power", 8, 50)
{
    return ;
}

PowerFist::PowerFist(std::string name) :
    AWeapon(name, 8, 50)
{
    return ;
}

PowerFist::PowerFist(PowerFist const & src) {
    *this = src;
    return ;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs) {
    this->setSound(rhs.getSound());
    this->setName(rhs.getName());
    this->setAPCost(rhs.getAPCost());
    this->setDamage(rhs.getDamage());
    return (*this);
}

void
PowerFist::attack() const {
    std::cout << "* psdchhh... SBAM *, you dealt " << this->getDamage() << std::endl;
}
