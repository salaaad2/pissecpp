#include "Victim.hpp"

Victim::Victim(void) {
    return ;
}

Victim::Victim(std::string const & name) :
 _name(name) {
    std::cout << "Some random Victim named " << this->_name <<  " just appeared" << std::endl;
    return ;
}

    //std::cout << "I am " << this->_name <<  ", and I like otters !" << std::endl;

Victim::Victim(Victim const & src) {
    *this = src;
    return ;
}

Victim::~Victim(void) {
    std::cout << this->_name <<  " Died in mysterious circumstances" << std::endl;
    return ;
}

void
Victim::getPolymorphed() const {
    std::cout << this->_name <<  " got polymorphed into a little sheep" << std::endl;
}

std::string
Victim::announce() const {
    std::string retstr("I am");
    retstr += this->_name;
    retstr += ", and I like otters !\n";
    return (retstr);
}

std::ostream &
operator<<(std::ostream & o, Victim const &rhs) {
    o << rhs.announce();
    return (o);
}

Victim & Victim::operator=(Victim const &rhs) {
    this->_name = rhs._name;
    return (*this);
}
