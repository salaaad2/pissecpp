#ifndef NINJATRAP_H
# define NINJATRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
    public :
        NinjaTrap();
        NinjaTrap(std::string name);
        ~NinjaTrap();

        void ninjaShoebox(ScavTrap & trap);
        void ninjaShoebox(FragTrap & trap);
        void ninjaShoebox(NinjaTrap & trap);
};

#endif // NINJATRAP_H
