#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>

class Victim {
    protected :
        std::string _name;
    public :
        Victim();
        Victim(std::string const & name);
        Victim(Victim const & name);
        virtual ~Victim();

        Victim & operator=(Victim const & rhs);

        std::string announce() const ;
        virtual void getPolymorphed() const ;
};

std::ostream & operator<<(std::ostream & o, Victim const &rhs);

#endif // VICTIM_H
