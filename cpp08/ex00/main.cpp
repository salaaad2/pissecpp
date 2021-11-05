#include "easyfind.hpp"

int main(void) {

    std::list<int> lst;
    int ret;

    lst.push_back(10);
    lst.push_back(10);
    lst.push_back(10);
    lst.push_back(42);
    lst.push_back(10);

    try {
        ret = easyfind<std::list<int> >(lst, 19);
    }
    catch (NotInContainerException & ce) {
        std::cout << ce.what() << std::endl;
    }
    std::cout << ret << std::endl;
    std::vector<int> ivect;

    ivect.push_back(10);
    ivect.push_back(10);
    ivect.push_back(10);
    ivect.push_back(42);
    ivect.push_back(10);

    try {
        ret = easyfind<std::vector<int> >(ivect, 42);
    }
    catch (NotInContainerException & ce) {
        std::cout << ce.what() << std::endl;
    }
    return 0;
}
