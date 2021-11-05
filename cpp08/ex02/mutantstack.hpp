#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
    public :
        MutantStack() : std::stack<T>() { };
        virtual ~MutantStack() {};

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() {return (std::stack<T, Container>::c.begin());}
        iterator end() {return (std::stack<T, Container>::c.end());}
};

#endif // MUTANTSTACK_H
