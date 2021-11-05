#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"


Zombie::Zombie() {
    std::cout << "how did i get here ?";
}

Zombie::~Zombie() {
   std::cout << "delete " << this->getName() << std::endl;
}

void
Zombie::setAttributes(std::string name, std::string type) {
    this->setName(name);
    this->setType(type);
}

void
Zombie::setName(std::string name) {
    this->_name = name;
}

std::string
Zombie::getName() const {
    return this->_name;
}

void
Zombie::setType(std::string type) {
    this->_type = type;
}

std::string
Zombie::getType() const {
    return this->_type;
}

void
Zombie::advert(void) const {
    std::cout << "<" << this->getName() << "("
    	<< this->getType() << ")> : " << "hmmmm le bon cerveau miam" << std::endl;
}
