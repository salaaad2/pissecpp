#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

#include <iostream>
#include <random>

class FragTrap : public ClapTrap {
    public :
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        void rangedAttack(std::string const &target) const ;
        void meleeAttack(std::string const &target) const ;
        void headButt(std::string const &target) const ;
        void flammenWerfer(std::string const &target) const ;
        void rudeComment(std::string const &target) const ;

        void vaulthunter_dot_exe(std::string const &target);
};

#endif // FRAGTRAP_H
