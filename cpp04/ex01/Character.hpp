#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
    private :
        AWeapon * equippedw;
        std::string _name;
        int _ap;
        Character();
    public :
        Character(std::string const & name);
        Character(Character const & name);
        virtual ~Character();

        void recoverAP();
        virtual void equip(AWeapon * weapon);
        virtual void attack(Enemy * enemy);

        std::string const & getName() const ;
        int getAP() const ;
        AWeapon * getWeapon() const;

        Character & operator=(Character const & rhs);
};

std::ostream & operator<<(std::ostream & o, Character const &rhs);

#endif // CHARACTER_H
