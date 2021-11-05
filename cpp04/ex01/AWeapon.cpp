#include "AWeapon.hpp"

AWeapon::AWeapon() :
    _name("not supposed to be there"), _apcost(0), _damage(12)
{
//    std::cout << "AWeapon just appeared" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
    _name(name), _apcost(apcost), _damage(damage)
{
 //   std::cout << "AWeapon just appeared" << std::endl;
    return ;
}

AWeapon::AWeapon(AWeapon const &src) {
    *this = src;
    return ;
}

AWeapon::~AWeapon(void) {
    std::cout << "AWeapon was destroyed" << std::endl;
    return ;
}

int
AWeapon::getAPCost() const {
    return (this->_apcost);
}

int
AWeapon::getDamage() const {
    return (this->_damage);
}

std::string const &
AWeapon::getName() const {
    return (this->_name);
}

std::string const &
AWeapon::getSound() const {
    return (this->_sound);
}

void
AWeapon::setAPCost(int value) {
    this->_apcost = value;
}

void
AWeapon::setDamage(int value) {
    this->_damage = value;
}

void
AWeapon::setName(std::string const & name) {
    this->_name = name;
}

void
AWeapon::setSound(std::string const & sound) {
    this->_sound = sound;
}

AWeapon & AWeapon::operator=(AWeapon const &rhs) {
    this->_damage = rhs.getDamage();
    this->_apcost = rhs.getAPCost();
    this->_name = rhs.getName();
    return (*this);
}
