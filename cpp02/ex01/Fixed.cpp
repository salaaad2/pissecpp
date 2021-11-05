#include "Fixed.hpp"

// just pretend every mention of "bits" says "bytes"

Fixed::Fixed(void) : _rawBits(0) {
    std::cout << "default constructor Called" << std::endl;
    return ;
}

Fixed::Fixed(float const rb) {
    std::cout << "parametric constructor Called" << std::endl;
    this->_rawBits = (int)std::roundf(rb * 256);
    return ;
}

Fixed::Fixed(int const rb) {
    this->_rawBits = (rb * 256);
    std::cout << "parametric constructor Called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << " copy constructor Called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed(void) {
    std::cout << " destructor Called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
    this->_rawBits = rhs.getRawBits();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs) {
    o << rhs.getFixed();
    return (o);
}

float Fixed::toFloat(void) const {
    return ((float)this->_rawBits / (256));
}

int Fixed::toInt(void) const {
    return ((int)round(this->_rawBits / (256)));
}

int Fixed::getRawBits(void) const {
    return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
    return ;
}

int Fixed::getFixed(void) const {
    return (this->_rawBits * (256));
}
