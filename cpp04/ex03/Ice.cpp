#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & src) {
	*this = src;
	return ;
}


Ice &
Ice::operator=(Ice const & rhs) {
	this->setType(rhs.getType());
	this->setXP(rhs.getXP());
	return (*this);
}

void
Ice::use(ICharacter & target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->incXP(10);
}

Ice *
Ice::clone(void) const {
    Ice * dst = new Ice(*this);
    return (dst);
}

Ice::~Ice() {
    std::cout << "destroyed materia of type ice *glass sounds*" << std::endl;
}
