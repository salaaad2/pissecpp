#include "Pony.hpp"
#include <iostream>

Pony::Pony(int age, int height) : _age(age), _height(height) {}

Pony::~Pony() {}

void Pony::neigh(int times) {
    int i = 0;

    i = 0;
    while (++i < times)
        std::cout << "YEEHAW" << std::endl;
    std::cout << "this is my height : " << this->_height << std::endl;

}

void
Pony::set_age(int newage) {
    this->_age = newage;
}

int
Pony::get_age() {
    return (this->_age);
}

void
Pony::print_age() {
    std::cout << "this is my age :" << this->_age << std::endl;
}
