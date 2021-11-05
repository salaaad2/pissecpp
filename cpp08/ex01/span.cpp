#include "span.hpp"

Span::Span(unsigned int const & n) : _maxInts(n), _arr(), _it(0) {
    return ;
}

void
Span::addNumber(int num) {
    if (_it < _maxInts) {
        _arr.insert(num);
        _it++;
    }
    else
        throw SpanFullException();
    return ;
}

void
Span::addNumber(unsigned int start, unsigned int end)
{
    for (; start <= end; start++) {
        addNumber(start);
    }
    return ;
}

int
Span::longestSpan(void) const {
    std::set<int>::iterator it = this->_arr.begin();
    std::set<int>::iterator ite = this->_arr.end();

    if (this->_it >= 2)
    {
        ite--;
        return (*ite - *it);
    }
    else
    {
        throw InvalidSpanException();
    }
    return (0);
}

int
Span::shortestSpan(void) const {
    if (this->_it < 2)
        throw InvalidSpanException();

    std::set<int>::iterator ita = this->_arr.begin();
    std::set<int>::iterator itb = this->_arr.begin();
    std::set<int>::iterator end = this->_arr.end();
    unsigned int ret = -1;

    itb++;
    while (itb != end)
    {
        if (static_cast<unsigned int>(*itb - *ita) < ret)
        {
            ret = static_cast<unsigned int>(*itb - *ita);
        }
        ita++;
        itb++;
    }
    return ((ret == -1U) ? 0 : ret);
}

void
Span::print(void) {
    std::set<int>::iterator it = _arr.begin();
    std::set<int>::iterator ite = _arr.end();

    while (it != ite) {
        std::cout << *it << std::endl;
        it++;
    }
}
