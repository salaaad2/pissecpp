#include "FragTrap.hpp"

FragTrap::FragTrap() :
    _name("FragTrap"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
    _maxEnergyPoints(100), _level(1), _meleeDmg(30), _rangedDmg(20), _armorReduc(5)
{
    std::cout << "Constructor was used to create <Fr4gTr4p>"  << std::endl;
}

FragTrap::FragTrap(std::string name) :
    _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
    _maxEnergyPoints(100), _level(1), _meleeDmg(30), _rangedDmg(20), _armorReduc(5)
{
    std::cout << "Parametric constructor was used to create \
<" << this->_name << "> "<< std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor was used to destroy <" << this->_name << ">" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
    int choice;

    choice = rand() % 5;
    if (this->_energyPoints >= 25)
    {
        switch (choice) {
            case 1:
            {
                this->meleeAttack(target);
                break;
            }
            case 2:
            {
                this->rangedAttack(target);
                break;
            }
            case 3:
            {
                this->headButt(target);
                break;
            }
            case 4:
            {
                this->flammenWerfer(target);
                break;
            }
            case 5:
            {
                this->rudeComment(target);
                break;
            }
        }
        this->useEnergy(25);
    }
    else
    {
        std::cout << this->_name << "has ran out of energy" << std::endl;
    }
}

void FragTrap::rangedAttack(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m attacked <" << target << "> from afar, dealing ["
        << this->_rangedDmg << "] damage" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m got in melee range and attacked <" << target <<
">, dealing [" << this->_meleeDmg << "] damage" << std::endl;
}

void FragTrap::headButt(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m got close and headbutted <" << target <<
">, dealing [" << (this->_meleeDmg * 2) << "] damage" << std::endl;
}

void FragTrap::flammenWerfer(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m Werfed Flammen towards <" << target <<
">, dealing [" << this->_meleeDmg << "] damage" << std::endl;
}

void FragTrap::rudeComment(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m insulted <" << target <<
">'s mother, lowering their energy by [" << this->_meleeDmg << "]" << std::endl;
}

void FragTrap::useEnergy(unsigned int amount) {
    this->_energyPoints = (this->_energyPoints - amount > 0) ?
        this->_energyPoints - amount :
        0;
    if (this->_energyPoints == 0)
    {
        std::cout << "<" << this->_name << "> Leveled up.\nCurrent level : [" << this->_level << "]" << std::endl;
        this->_level++;
    }
}

void FragTrap::getEnergy(unsigned int amount) {
    this->_energyPoints = ((this->_energyPoints + amount) < (unsigned int)this->_maxEnergyPoints) ?
        this->_energyPoints + amount :
        this->_maxEnergyPoints;
}

void FragTrap::takeDamage(unsigned int amount) {
    this->_hitPoints = (this->_hitPoints - amount - this->_armorReduc > 0) ?
        this->_hitPoints - amount - this->_armorReduc :
        0;
}

void FragTrap::getRepaired(unsigned int amount) {
    this->_hitPoints = ((this->_hitPoints + amount) < (unsigned int)this->_maxHitPoints) ?
        this->_hitPoints + amount :
        this->_maxHitPoints;
}
