#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
    std::cout << "Click click click" << std::endl;
    return ;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* Sprotch *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(80, "RadScorpion") {
    *this = src;
    return ;
}

RadScorpion & RadScorpion::operator=(RadScorpion const &rhs) {
    this->setType(rhs.getType());
    this->setHP(rhs.getHP());
    return (*this);
}
