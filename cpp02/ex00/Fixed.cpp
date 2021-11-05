#include "Fixed.hpp"

// just pretend every mention of "bits" says "bytes"

Fixed::Fixed(void) : _rawBits(0) {
    std::cout << "default constructor Called" << std::endl;
    return ;
}

Fixed::Fixed(int const rb) : _rawBits(rb) {
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

int Fixed::getRawBits(void) const {
    return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
    return ;
}
