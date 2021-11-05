#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
    int _rawBits;
    static const int _bytesnb = 8;
    public:
        Fixed(void);
        Fixed(int const rb);
        Fixed(Fixed const &src);
        ~Fixed();

        Fixed & operator=(Fixed const & rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif // FIXED_H
