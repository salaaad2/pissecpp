#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
    _name("ClapTrap"), _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
    _maxEnergyPoints(50), _level(1), _meleeDmg(20), _rangedDmg(15), _armorReduc(3)
{
    std::cout << "Constructor was used to create a ClapTrap named named <ClapTrap>"  << std::endl;
}

ClapTrap::ClapTrap(std::string name, int HP, int maxHP, int energy,
   int maxEnergy, int level, int meleeDmg, int rangedDmg, int armorReduc) :
    _name(name), _hitPoints(HP), _maxHitPoints(maxHP), _energyPoints(energy),
    _maxEnergyPoints(maxEnergy), _level(level), _meleeDmg(meleeDmg), _rangedDmg(rangedDmg), _armorReduc(armorReduc)
{
    std::cout << "Parametric constructor was used to create a ClapTrap named\
<" << this->_name << "> "<< std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor was used to destroy <" << this->_name << ">" << std::endl;
}

void ClapTrap::useEnergy(unsigned int amount) {
    this->_energyPoints = (this->_energyPoints - amount > 0) ?
        this->_energyPoints - amount :
        0;
    if (this->_energyPoints == 0)
    {
        std::cout << "<" << this->_name << "> Leveled up.\nCurrent level : [" << this->_level << "]" << std::endl;
        this->_level++;
    }
}

void ClapTrap::getEnergy(unsigned int amount) {
    this->_energyPoints = ((this->_energyPoints + amount) < (unsigned int)this->_maxEnergyPoints) ?
        this->_energyPoints + amount :
        this->_maxEnergyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hitPoints = (this->_hitPoints - amount - this->_armorReduc > 0) ?
        this->_hitPoints - amount - this->_armorReduc :
        0;
}

void ClapTrap::getRepaired(unsigned int amount) {
    this->_hitPoints = ((this->_hitPoints + amount) < (unsigned int)this->_maxHitPoints) ?
        this->_hitPoints + amount :
        this->_maxHitPoints;
}
