#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) :
    AWeapon("plasma", 5, 21) {

}

PlasmaRifle::PlasmaRifle(std::string name) :
    AWeapon(name, 5, 21)
{
    return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
    *this = src;
    return ;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs) {
    this->setSound(rhs.getSound());
    this->setName(rhs.getName());
    this->setAPCost(rhs.getAPCost());
    this->setDamage(rhs.getDamage());
    return (*this);
}

void
PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *, you dealt " << this->getDamage() << std::endl;
}
