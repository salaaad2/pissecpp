#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
    _name(name), _weapon(Weapon("")), _weaponRef(_weapon)
{
}

HumanB::~HumanB() {}

void
HumanB::setWeapon(Weapon& weapon) {
    this->_weaponRef = weapon;
}

void
HumanB::attack(void) const {
    std::cout << this->_weaponRef.getType() << std::endl;
}
