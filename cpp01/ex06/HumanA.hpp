#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {
    std::string _name;
    Weapon _weapon;
    Weapon& _weaponRef = _weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack() const;
};

#endif // HUMANA_H
