#include <iostream>
#include "serialize.hpp"

int
main(void)
{
    void * raw = serialize();
    Data *qwe = deserialize(raw);

    std::cout << "-----print data from main after deserialization ----\n";
    std::cout << qwe->s1 << "\n";
    std::cout << qwe->n << "\n";
    std::cout << qwe->s2 << std::endl;
	delete qwe;
}
