#include "PipeGun.hpp"

PipeGun::PipeGun(void) :
    AWeapon("pipe", 1, 7)
{
    return ;
}

PipeGun::PipeGun(std::string name) :
    AWeapon(name, 1, 7)
{
    return ;
}

PipeGun::PipeGun(PipeGun const & src) {
    *this = src;
    return ;
}

PipeGun & PipeGun::operator=(PipeGun const & rhs) {
    this->setSound(rhs.getSound());
    this->setName(rhs.getName());
    this->setAPCost(rhs.getAPCost());
    this->setDamage(rhs.getDamage());
    return (*this);
}

void
PipeGun::attack() const {
    std::cout << "* BANG, click *, you dealt " << this->getDamage() << std::endl;
}
