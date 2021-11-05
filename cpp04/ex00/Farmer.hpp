#ifndef FARMER_H
#define FARMER_H

#include <iostream>

#include "Victim.hpp"

class Farmer : public Victim {
    Farmer();
    public :
        Farmer(std::string const &name);
        Farmer(Farmer const & name);
        virtual ~Farmer();

        void getPolymorphed() const;

        Farmer & operator=(Farmer const &rhs);
};

std::ostream & operator<<(std::ostream & o, Farmer const &rhs);

#endif // PEON_H
