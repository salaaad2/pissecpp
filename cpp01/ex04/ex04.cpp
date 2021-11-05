#include <iostream>

int main(void) {
    std::string	myString = "HI THIS IS BRAIN";
    std::string*	ptrs = &myString;;
    std::string&	refs = myString;

    std::cout << "print by dereferencing :" << *ptrs << "\nprint by ref : " << refs << std::endl;
    return 0;
}
