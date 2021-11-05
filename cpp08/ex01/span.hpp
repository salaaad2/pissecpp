#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <set>

class Span {
    private :
        unsigned int const & _maxInts;
        std::set<int> _arr;
        unsigned int _it;
        Span const & operator=(Span const & rhs);
    public :
        Span(Span const & src);
        Span(unsigned int const & n);
        ~Span() {}

        void addNumber(int num);
        void addNumber(unsigned int start, unsigned int end);

        void print(void);

        int longestSpan(void) const ;
        int shortestSpan(void) const ;

        class InvalidSpanException : public std::exception {
            public :
                virtual const char * what() const throw() {
                    return ("span isn't valid");
                }
        };

        class SpanFullException : public std::exception {
            public :
                virtual const char * what() const throw(){
                    return ("span is full");
                }
        };
};

#endif // SPAN_H
