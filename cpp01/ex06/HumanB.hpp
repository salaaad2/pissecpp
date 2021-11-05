#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {
    std::string _name;
    Weapon _weapon;
    Weapon& _weaponRef = _weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon& weapon);
        void attack() const;
};

#endif // HUMANB_H
