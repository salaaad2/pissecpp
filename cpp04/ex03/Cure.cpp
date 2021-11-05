#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & src) {
	*this = src;
	return ;
}

Cure &
Cure::operator=(Cure const & rhs) {
	this->setType(rhs.getType());
	this->setXP(rhs.getXP());
	return (*this);
}

void
Cure::use(ICharacter & target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    this->incXP(10);
}

Cure *
Cure::clone(void) const {
    Cure * dst = new Cure(*this);
    return (dst);
}

Cure::~Cure() {
    std::cout << "destroyed materia of type cure *magicsounds*" << std::endl;
}
