#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

class NotInContainerException : public std::exception {
    public :
        virtual const char * what() const throw() {
            return ("Value requested is not present in the container");
        }
};

template<typename T>
int easyfind(T const & haystack, int n)
{
    typename T::const_iterator it;

    it = find(haystack.begin(), haystack.end(), n);
    std::cout << "easyfind called" << std::endl;
    if (it == haystack.end()) {
        std::cout << "found [" << *it << "] in haystack" << std::endl;
        return (0);
    }
    throw NotInContainerException();
    return (1);
}

#endif // EASYFIND_H
