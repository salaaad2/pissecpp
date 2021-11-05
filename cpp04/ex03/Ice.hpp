#ifndef ICE_H
#define ICE_H

#include <iostream>

#include "AMateria.hpp"

class Ice : public AMateria {
    public :
            Ice();
            Ice(Ice const & src);
            virtual ~Ice();
            void use(ICharacter & target);
            Ice * clone() const;

            Ice & operator=(Ice const & rhs);
};

#endif // ICE_H
