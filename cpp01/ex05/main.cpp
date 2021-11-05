#include <iostream>

#include "Human.hpp"

int
main(void)
{
    Human louis;

    std::cout << louis.identify() << std::endl;
    std::cout << louis.getBrain().identify() << std::endl;
    return 0;
}
