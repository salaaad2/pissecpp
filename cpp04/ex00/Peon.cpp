#include "Peon.hpp"

Peon::Peon(std::string const &name) :
    Victim(name) {
    std::cout << "Zog zog" << std::endl;
    return ;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
    return ;
}

Peon & Peon::operator=(Peon const &rhs) {
    this->_name = rhs._name;
    return (*this);
}

Peon::Peon(Peon const &src) {
    *this = src;
    return ;
}

void
Peon::getPolymorphed() const {
    std::cout << this->_name <<  " got polymorphed into a little pony" << std::endl;
}

std::ostream &
operator<<(std::ostream & o, Peon const &rhs) {
    o << rhs.announce();
    return (o);
}
