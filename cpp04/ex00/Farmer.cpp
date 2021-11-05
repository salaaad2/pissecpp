#include "Farmer.hpp"

Farmer::Farmer(std::string const &name) :
    Victim(name) {
    std::cout << "It ain't much, but it's honest work" << std::endl;
    return ;
}

Farmer::~Farmer(void) {
    std::cout << "You watch the fields, I'll watch the skies."<< std::endl;
    return ;
}

Farmer::Farmer(Farmer const &src) {
    *this = src;
    return ;
}

void
Farmer::getPolymorphed() const {
    std::cout << this->_name <<  " got polymorphed into a very cool cow" << std::endl;
}

Farmer & Farmer::operator=(Farmer const &rhs) {
    this->_name = rhs._name;
    return (*this);
}

std::ostream &
operator<<(std::ostream & o, Farmer const &rhs) {
    o << rhs.announce();
    return (o);
}
