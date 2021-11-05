#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
    ClapTrap("ScavTrap", 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << "Constructor was used to create a ScavTrap named named <5C4VTR4P>"  << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
    ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << "Parametric constructor was used to create a ScavTRap named\
<" << this->_name << "> "<< std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor was used to destroy <" << this->_name << ">" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target) {
    std::string input;
    std::cout << "\033[33m<" << this->_name << ">\033[0m saw someone approaching. No choice but to attack them. \
What do you want to do ? "<< std::endl;
    std::cout << "1 - Shoot him \n 2 - stab him \n3 - shoot him, but harder \n4 - take out a limb \n5 - destroy his ego "
    << std::endl;
    std::cin >> input;
    if (this->_energyPoints >= 25)
    {
        switch (std::stol(input)) {
            case 1:
            {
                this->justAGun(target);
                break;
            }
            case 2:
            {
                this->justAKnife(target);
                break;
            }
            case 3:
            {
                this->biggerGun(target);
                break;
            }
            case 4:
            {
                this->biggerKnife(target);
                break;
            }
            case 5:
            {
                this->egoDestroyer(target);
                break;
            }
        }
        this->useEnergy(25);
    }
    else
    {
        std::cout << this->_name << "has ran out of energy" << std::endl;
    }
}

void ScavTrap::justAGun(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m pulled out his trusty revolver and shot <" << target <<
">, dealing [" << (this->_meleeDmg * 2) << "] damage" << std::endl;
}

void ScavTrap::justAKnife(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m took his K-bar in hand, and slashed <" << target <<
">, dealing [" << this->_meleeDmg << "] damage" << std::endl;
}

void ScavTrap::biggerGun(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m Reached in his back pocket, oh my got it's huge <" << target <<
"> now has a hole in his chest. That's [" << this->_meleeDmg << "] hp in these parts" << std::endl;
}

void ScavTrap::biggerKnife(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m is that a chainsaw ? <" << target <<
"> is missing an arm and [" << this->_meleeDmg << "] hp" << std::endl;
}

void ScavTrap::egoDestroyer(std::string const &target) const  {
    std::cout << "\033[33m<" << this->_name << ">\033[0m reminded <" << target <<
"> that he'll end up in a dumpster, loved by no one. He is missing  [" << this->_meleeDmg << "] hp because this is a video game" << std::endl;
}
