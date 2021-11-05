#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) :
    ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5)
{
    std::cout << "Parametric constructor was used to create a SuperTrap called \
<" << this->_name << "> "<< std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "Destructor called on SuperTrap named <" << this->_name << ">" << std::endl;
}
