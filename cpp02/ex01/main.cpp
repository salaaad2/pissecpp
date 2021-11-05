#include <iostream>

#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b(1);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.432f);

    std::cout << "a is : " << a << std::endl;
    std::cout << "b is : " << b << std::endl;
    std::cout << "c is : " << c << std::endl;
    std::cout << "d is : " << d << std::endl;

    std::cout << "a is : " << a.toInt() << " in integer form" << std::endl;
    std::cout << "b is : " << b.toInt() << " in integer form" << std::endl;
    std::cout << "c is : " << c.toInt() << " in integer form" << std::endl;
    std::cout << "d is : " << d.toInt() << " in integer form" << std::endl;

    std::cout << "a is : " << a.toFloat() << " in float form" << std::endl;
    std::cout << "b is : " << b.toFloat() << " in float form" << std::endl;
    std::cout << "c is : " << c.toFloat() << " in float form" << std::endl;
    std::cout << "d is : " << d.toFloat() << " in float form" << std::endl;
    return 0;
}
