#ifndef CURE_H
#define CURE_H

#include <iostream>

#include "AMateria.hpp"

class Cure : public AMateria {
    public :
        Cure();
        Cure(Cure const & src);
        virtual ~Cure();
        void use(ICharacter & target);
        Cure * clone() const ;

        Cure & operator=(Cure const & rhs);
};

#endif // ICE_H
