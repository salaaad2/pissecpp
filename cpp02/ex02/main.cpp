#include <iostream>

#include "Fixed.hpp"

int
main(void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(10.2f);
    Fixed d(2);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << a + b << std::endl;
    std::cout << c - a << std::endl;
    std::cout << c / d << std::endl;
    if (c > b)
        std::cout << "c is higher than b"  << std::endl;
    else if (c < b)
        std::cout << "c is lower than b"  << std::endl;
    else if (c == b)
        std::cout << "c is equal to b"  << std::endl;

    if (c != b)
        std::cout << "c is not the same as b"  << std::endl;

    std::cout << Fixed::max(a, d) << std::endl;

    // std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}
