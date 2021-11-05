#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() :
    ClapTrap("NinjaTrap", 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "Constructor was used to create <NinjaTrap>"  << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) :
    ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "Parametric constructor was used to create a ninjatrap called \
<" << this->_name << "> "<< std::endl;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "Destructor was used to destroy <" << this->_name << ">" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & trap) {
    std::cout << "The ninja got behind the scavenger and stabbed him repeatedly" << std::endl;
    trap.takeDamage(this->_meleeDmg);
}

void NinjaTrap::ninjaShoebox(FragTrap & trap) {
    std::cout << "The Ninja got close easily and attacked the fragger" << std::endl;
    trap.takeDamage(this->_meleeDmg);
}

void NinjaTrap::ninjaShoebox(NinjaTrap & trap) {
    std::cout << "The ninja couldn't get close to the target, because the target is too stealthy" << std::endl;
    trap.takeDamage(this->_rangedDmg);
}
