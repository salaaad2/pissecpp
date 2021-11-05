#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
    private:
        Character(void) {}
        std::string _name;
        AMateria ** _m;
        unsigned int _num;
    public :
        Character(Character const & src);
        Character(std::string const &name);
        virtual ~Character();
        std::string const & getName() const ;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target) ;
        Character const & operator=(Character const & rhs);
};

#endif
