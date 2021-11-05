#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
    public :
        SuperTrap(std::string name);
        ~SuperTrap();

};

#endif // SUPERTRAP_H
