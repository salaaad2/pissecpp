#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
    _name(name), _weapon(weapon), _weaponRef(weapon)
{
}

HumanA::~HumanA() {}

void
HumanA::attack(void) const {
    std::cout << this->_weaponRef.getType() << std::endl;
}
