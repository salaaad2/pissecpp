#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

#include <iostream>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();

        void justAGun(std::string const &target) const;
        void justAKnife(std::string const &target) const;
        void biggerGun(std::string const &target) const;
        void biggerKnife(std::string const &target) const;
        void egoDestroyer(std::string const &target) const;

        void challengeNewcomer(std::string const &target);
};

#endif // SCAVTRAP_H
