#include "Fixed.hpp"

// just pretend every mention of "bits" says "bytes"

Fixed::Fixed(void) : _rawBits(0) {
    return ;
}

Fixed::Fixed(float const rb) {
    this->_rawBits = (int)roundf(rb * 256);
    return ;
}

Fixed::Fixed(int const rb) {
    this->_rawBits = (rb * 256);
    return ;
}

Fixed::Fixed(Fixed const &src) {
    *this = src;
    return ;
}

Fixed::~Fixed(void) {
    return ;
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

bool   Fixed::operator>(Fixed const &rhs) const {
    return (this->_rawBits > rhs.getRawBits());
}

bool   Fixed::operator<(Fixed const &rhs) const {
    return (this->_rawBits < rhs.getRawBits());
}

bool   Fixed::operator==(Fixed const &rhs) {
    return (this->_rawBits == rhs.getRawBits());
}

bool   Fixed::operator!=(Fixed const &rhs) {
    return (this->_rawBits != rhs.getRawBits());
}

bool   Fixed::operator>=(Fixed const &rhs) {
    return (this->_rawBits >= rhs.getRawBits());
}

bool   Fixed::operator<=(Fixed const &rhs) {
    return (this->_rawBits <= rhs.getRawBits());
}

Fixed & Fixed::operator=(Fixed const &rhs) {
    this->_rawBits = rhs.getRawBits();
    return (*this);
}

Fixed   Fixed::operator+(Fixed const &rhs) {
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed & Fixed::operator++() {
    this->_rawBits++;
    return (*this);
}

Fixed   Fixed::operator++(int) {
    Fixed tmp (*this);
    operator++();
    return (tmp);
}

Fixed   Fixed::operator-(Fixed const &rhs) {
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &rhs) {
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &rhs) {
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs) {
    o << rhs.toFloat();
    return (o);
}

Fixed & Fixed::max(Fixed &lhs, Fixed &rhs) {
    if (lhs.getRawBits() > rhs.getRawBits())
        return (lhs);
    else if (lhs.getRawBits() < rhs.getRawBits())
        return (rhs);
    return (lhs);
}

Fixed & Fixed::min(Fixed &lhs, Fixed &rhs) {
    if (lhs.getRawBits() < rhs.getRawBits())
        return (lhs);
    else if (lhs.getRawBits() > rhs.getRawBits())
        return (rhs);
    return (lhs);
}

const Fixed & Fixed::max(Fixed const &lhs, Fixed const &rhs) {
    if (lhs < rhs)
        return (rhs);
    return (lhs);
}

const Fixed & Fixed::min(Fixed const &lhs, Fixed const &rhs) {
    if (lhs > rhs)
        return (rhs);
    return (lhs);
}
