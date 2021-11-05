#ifndef AMATERIA_H_
#define AMATERIA_H_

#include <iostream>

#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    private :
        std::string _type;
        int _xp;
    public :
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & name);
        virtual ~AMateria();

        unsigned int getXP() const ;
        void incXP(unsigned int amount);
        std::string const & getType() const ;

        void setXP(unsigned int xp);
        void setType(std::string const & type);

        virtual AMateria * clone() const = 0;
        virtual void use(ICharacter & target);

        AMateria & operator=(AMateria const & rhs);
};

#endif // __AWEAPON_H_
