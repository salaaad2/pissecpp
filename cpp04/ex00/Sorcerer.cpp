#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
    return ;
}

Sorcerer::Sorcerer(std::string const & name, std::string const & title) :
    _name(name), _title(title) {
    std::cout << name << ", "<< title << " is born" << std::endl;
    return ;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << ", "<< this->_title << " is dead. Consequences will never be the same !!" << std::endl;
    return ;
}

void
Sorcerer::polymorph(Victim const &vict) {
    vict.getPolymorphed();
}

Sorcerer::Sorcerer(Sorcerer const &src) {
    *this = src;
    return ;
}

Sorcerer &
Sorcerer::operator=(Sorcerer const &rhs) {
    this->_name = rhs._name;
    return (*this);
}

std::string
Sorcerer::getName(void) const {
    return (this->_name);
}

std::string
Sorcerer::getTitle(void) const {
    return (this->_title);
}

void
Sorcerer::announce() const {
    std::cout <<  this->_name <<  ", " <<  this->_title <<  ", and I like ponies !\n" << std::endl;
}

std::ostream &
operator<<(std::ostream & o, Sorcerer const &rhs) {
    o << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies\n";
    return (o);
}
