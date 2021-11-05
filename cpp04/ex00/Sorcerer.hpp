#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>

#include "Victim.hpp"

class Sorcerer {
    Sorcerer();
    std::string _name;
    std::string _title;
    public :
        Sorcerer(std::string const & name, std::string const & title);
        Sorcerer(Sorcerer const & name);
        ~Sorcerer();
        Sorcerer & operator=(Sorcerer const & rhs);


        std::string getName(void) const ;
        std::string getTitle(void) const ;
        void announce() const ;

        void polymorph(Victim const &vict);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const &rhs);

#endif // SORCERER_H
