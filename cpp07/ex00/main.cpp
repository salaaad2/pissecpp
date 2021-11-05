#include <iostream>

#include "whatever.hpp"

int main(void) {

    int a, b;
    int const ca = 4;
    int const cb = 5;

    const int ca = 8;
    const int cb = 9;
    a = 12;
    b = 5;

    std::cout << "===== CONST " << std::endl;
    ::swap(ca, cb);
    std::cout << "a : " << ca << " b: " << cb << std::endl;
    std::cout << max(ca, cb) << std::endl;
    std::cout << min(ca, cb) << std::endl;

    std::cout << "===== mut ==== " << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;
    swap(a, b);
    std::cout << "a : " << a << " b : " << b << std::endl;
    std::cout << max(a, b) << std::endl;

    std::cout << max(ca, cb) << std::endl;



    std::string c = "qweqwe1";
    std::string d = "qweqwe2";

    std::cout << ::max(c, d) << std::endl;
    std::cout << ::min(c, d) << std::endl;
    ::swap(c, d);
    std::cout << "c : " << c << " d : " << d << std::endl;
    std::cout << ::max(c, d) << std::endl;


    return 0;
}
