#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>

class ScavTrap {
    std::string _name;
    int _hitPoints;
    const int _maxHitPoints;
    int _energyPoints;
    const int _maxEnergyPoints;
    int _level;
    int _meleeDmg;
    int _rangedDmg;
    int _armorReduc;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();

        void justAGun(std::string const &target) const;
        void justAKnife(std::string const &target) const;
        void biggerGun(std::string const &target) const;
        void biggerKnife(std::string const &target) const;
        void egoDestroyer(std::string const &target) const;

        void useEnergy(unsigned int amount);
        void getEnergy(unsigned int amount);
        void takeDamage(unsigned int amount);
        void getRepaired(unsigned int amount);

        void challengeNewcomer(std::string const &target);
};

#endif // SCAVTRAP_H
