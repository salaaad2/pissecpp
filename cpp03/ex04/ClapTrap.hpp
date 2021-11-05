#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
    protected :
        std::string _name;
        int _hitPoints;
        const int _maxHitPoints;
        int _energyPoints;
        const int _maxEnergyPoints;
        int _level;
        int _meleeDmg;
        int _rangedDmg;
        int _armorReduc;
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int HP, int maxHP, int energy,
            int maxEnergy, int level, int meleeDmg, int rangedDmg, int armorReduc);
        ~ClapTrap();

        void useEnergy(unsigned int amount);
        void getEnergy(unsigned int amount);
        void takeDamage(unsigned int amount);
        void getRepaired(unsigned int amount);
};

#endif // CLAPTRAP_H
