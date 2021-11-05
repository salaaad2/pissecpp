#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <random>

class FragTrap {
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
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        void rangedAttack(std::string const &target) const ;
        void meleeAttack(std::string const &target) const ;
        void headButt(std::string const &target) const ;
        void flammenWerfer(std::string const &target) const ;
        void rudeComment(std::string const &target) const ;

        void useEnergy(unsigned int amount);
        void getEnergy(unsigned int amount);
        void takeDamage(unsigned int amount);
        void getRepaired(unsigned int amount);

        void vaulthunter_dot_exe(std::string const &target);
};

#endif // FRAGTRAP_H
