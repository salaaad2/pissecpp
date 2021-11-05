#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
    int _rawBits;
    static const int _bytesnb = 8;
    public:
        Fixed(void);
        Fixed(int const rb);
        Fixed(float const rb);
        Fixed(Fixed const &src);
        ~Fixed();

        Fixed & operator=(Fixed const & rhs);
        Fixed   operator+(Fixed const & rhs);
        Fixed   operator-(Fixed const & rhs);
        Fixed   operator*(Fixed const &rhs);
        Fixed   operator/(Fixed const &rhs);

        Fixed & operator++();
        Fixed   operator++(int);

        static Fixed & max(Fixed &lhs, Fixed &rhs);
        static Fixed & min(Fixed &lhs, Fixed &rhs);
        static const Fixed & max(Fixed const &lhs, Fixed const &rhs);
        static const Fixed & min(Fixed const &lhs, Fixed const &rhs);

        bool   operator<(Fixed const &rhs)const ;
        bool   operator>(Fixed const &rhs)const ;

        bool   operator==(Fixed const &rhs);
        bool   operator!=(Fixed const &rhs);
        bool   operator<=(Fixed const &rhs);
        bool   operator>=(Fixed const &rhs);

        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int getFixed(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const &rhs);

#endif // FIXED_H
