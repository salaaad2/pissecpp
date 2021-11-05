#include "AMateria.hpp"

AMateria::AMateria() :
    _type("not supposed to be there"), _xp(0)
{
    std::cout << "AMateria just appeared" << std::endl;
}

AMateria::AMateria(std::string const & type) :
    _type(type), _xp(0)
{
    std::cout << "AMateria just appeared" << std::endl;
    return ;
}

AMateria::AMateria(AMateria const &src) :
    _type(src.getType()), _xp(0)
{
    *this = src;
    return ;
}

AMateria::~AMateria(void) {
    std::cout << "AMateria was destroyed" << std::endl;
    return ;
}

unsigned int
AMateria::getXP() const {
    return (this->_xp);
}

void
AMateria::incXP(unsigned int amount) {
    if (this->_xp <= 40)
    {
        this->_xp += amount;
    }
    else
    {
        std::cout << "max xp reached for this materia, you've got mail" << std::endl;
    }
}

void
AMateria::setType(std::string const & type) {
    this->_type = type;
}

void
AMateria::setXP(unsigned int xp) {
    this->_xp = xp;
}

std::string const &
AMateria::getType() const {
    return (this->_type);
}

void
AMateria::use(ICharacter &target) {
    this->incXP(10);
    std::cout << "this makes no sense,* bang * " << target.getName() << "was shot... with magic" << std::endl;
}

AMateria &
AMateria::operator=(AMateria const &rhs) {
    this->_type = rhs.getType();
    this->_xp = rhs.getXP();
    return (*this);
}
