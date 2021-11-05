#ifndef PEON_H
#define PEON_H

#include <iostream>

#include "Victim.hpp"

class Peon : public Victim {
    Peon();
    public :
        Peon(std::string const &name);
        Peon(Peon const & name);
        virtual ~Peon();

        void getPolymorphed() const;

        Peon & operator=(Peon const & rhs);
};

std::ostream & operator<<(std::ostream & o, Peon const &rhs);

#endif // PEON_H
