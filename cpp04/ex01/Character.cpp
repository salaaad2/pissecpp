#include "Character.hpp"

Character::Character(std::string const & name) : equippedw(NULL), _name(name), _ap(40) {
    std::cout << "Character just appeared" << std::endl;
    return ;
}

Character::Character(Character const &src) {
    *this = src;
    return ;
}

Character::~Character(void) {
    std::cout << "Character was destroyed" << std::endl;
    return ;
}

int
Character::getAP() const {
    return (this->_ap);
}

AWeapon *
Character::getWeapon() const {
    return (this->equippedw);
}

std::string const &
Character::getName() const {
    return (this->_name);
}

Character &
Character::operator=(Character const &rhs) {
    this->_name = rhs.getName();
    return (*this);
}

std::ostream &
operator<<(std::ostream & o, Character const &rhs) {
    o << rhs.getName() << " has " << rhs.getAP() << " AP, and ";
    if (rhs.getWeapon())
        o << "is carrying " << rhs.getWeapon()->getName();
    else
        o << "is unarmed";
    o << "\n";
    return (o);
}

void
Character::recoverAP() {
    if (this->_ap < 30)
    {
        this->_ap += 10;
    }
    else
        this->_ap = 40;
}

void
Character::equip(AWeapon * weapon) {
    if (weapon != NULL)
    {
        this->equippedw = weapon;
    }
    else
    {
        std::cout << "weapon must first be initialized, in order to be equipped" << std::endl;
    }
}

void
Character::attack(Enemy * enemy) {
    if (enemy != NULL && this->equippedw != NULL)
    {
        if (this->_ap >= this->getWeapon()->getAPCost())
        {
            std::cout << "Character <" << this->getName() << "> tries to attack " << enemy->getType() << " using <" << this->equippedw->getName() << ">" << std::endl;
            this->getWeapon()->attack();
            this->_ap -= this->getWeapon()->getAPCost();
            enemy->takeDamage(this->getWeapon()->getDamage());
        }
        else
        {
            std::cout << "Character <" << this->getName() << "> has insufficient AP to attack" << std::endl;
        }
    }
    else
    {
        std::cout << "Enemy doesn't exist" << std::endl;
    }
}
