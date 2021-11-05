#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {
    //std::cout << "Enemy of type <" << this->getType()<< "> appeared" << std::endl;
    return ;
}

Enemy::Enemy(Enemy const &src) {
    *this = src;
    return ;
}

Enemy::~Enemy(void) {
    std::cout << "Enemy was destroyed" << std::endl;
    return ;
}

void
Enemy::setType(std::string const & type) {
    this->_type = type;
}

std::string const &
Enemy::getType() const {
    return (this->_type);
}

void
Enemy::setHP(int hp) {
    this->_hp = hp;
}

int
Enemy::getHP() const {
    return (this->_hp);
}

void
Enemy::takeDamage(int damage) {
    if (damage < this->getHP() && damage > 0)
    {
        this->setHP(this->getHP() - (damage));
    }
    else if (damage > this->getHP())
    {
        this->setHP(0);
    }
    else {
        std::cout << "Missed" << std::endl;
    }
}

Enemy & Enemy::operator=(Enemy const &rhs) {
    this->_hp = rhs.getHP();
    this->_type = rhs.getType();
    return (*this);
}
