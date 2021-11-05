#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

#include "Form.hpp"

class Form;

class Bureaucrat {
    private :
        std::string const & _name;
        int _rank;
        Bureaucrat();
    public :
        Bureaucrat(std::string const & name, int rank);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();

        unsigned int getRank()const ;
        std::string const & getName()const ;

        void executeForm(Form const & form) const ;

        void decRank();
        void incRank();

        void setRank(int rank);

        class RankTooHighException : public std::exception {
            public :
                virtual const char * tooHigh() const throw() {
                    return ("rank is too high");
                }
        };

        class RankTooLowException : public std::exception {
            public :
                virtual const char * tooLow() const throw() {
                    return ("rank is too low");
                }
        };

        Bureaucrat & operator=(Bureaucrat const & rhs);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif // BUREAUCRAT_H
