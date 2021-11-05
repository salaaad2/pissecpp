#include <iostream>

#include "Array.hpp"

int main(void) {

    unsigned int test = 5;
    std::cout << "---create empty arr--\n";
    Array<unsigned int> uiarr(test);
    for (unsigned int i = 0; i < test; i++)
    {
        std::cout << uiarr[i] << std::endl;
    }
    std::cout << "---now modify it-\n";

    for (unsigned int i = 0; i < test; i++)
    {
        uiarr[i] = (i + i);
        std::cout << uiarr[i] << std::endl;
    }
    Array<unsigned int> oarr(test);
    std::cout << "---operator overloading-\n";
    oarr = uiarr;
    std::cout << "---modify and print copied -\n";
    for (unsigned int i = 0; i < test; i++)
    {
        oarr[i] = (i * 5);
        std::cout << oarr[i] << std::endl;
    }
    std::cout << "---then print original-\n";
    for (unsigned int i = 0; i < test; i++)
    {
        std::cout << uiarr[i] << std::endl;
    }
    std::cout << "---now throw an exception-\n";
    try
    {
        oarr[5] = 17890;
    }
    catch(Array<unsigned int>::OutOfBoundsException &e) {
        std::cout << e.outOfBounds() << std::endl;
    }

    std::cout << "---array of strings -\n";
    Array<std::string> stringarr(test);
    std::cout << "---fill and print elements-\n";
    std::cout << "---print elements-\n";
    for (unsigned int i = 0; i < test; i++)
    {
        std::cout << "[" << stringarr[i] << "]" << std::endl;
    }
    std::cout << "---fill and print elements-\n";
    for (unsigned int i = 0; i < test; i++)
    {
        stringarr[i] = "this";
        std::cout << stringarr[i] << std::endl;
    }
    std::cout << "---array of floats -\n";
    Array<float> floatarr(test);
    std::cout << "---fill and print elements-\n";
    std::cout << "---print elements-\n";
    std::cout << floatarr << std::endl;
    for (unsigned int i = 0; i < test; i++)
    {
        std::cout << "[" << floatarr[i] << "]" << std::endl;
    }
    std::cout << "---fill and print elements-\n";
    for (unsigned int i = 0; i < test; i++)
    {
        floatarr[i] = 42.98f;
        std::cout << floatarr[i] << std::endl;
    }
    const Array<int> qwe(test);
    std::cout << qwe[0] << std::endl;
    // qwe[0] = 12;  // erreur de compil
    // std::cout << qwe[0] << std::endl;
    return 0;
}
