#ifndef FORM_H
#define FORM_H

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private :
        bool _issigned;
        std::string const _name;
        unsigned int const _reqSignRank;
        unsigned int const _reqExecRank;
    public :
        Form(std::string const & name, unsigned int signRank, unsigned int execRank);
        Form(Form const & src);
        ~Form();

        unsigned int setRank(int rank);

        bool getStatus() const ;
        unsigned int getSignReqRank() const ;
        unsigned int getExecReqRank() const ;
        std::string const & getName() const ;

        void sign(Bureaucrat const & bureaucrat);

        void execute(Bureaucrat const & executor) const ;

        virtual void order(bool) const = 0;

        class RankTooHighException : public std::exception {
            public :
                virtual const char * tooHigh() const throw() {
                    return ("provided rank is too high");
                }
        };

        class RankTooLowException : public std::exception {
            public :
                virtual const char * tooLow() const throw() {
                    return ("Bureaucrat's rank is too low to sign this contract, or provided rank is invalid");
                }
        };
        Form & operator=(Form const & rhs);
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif // FORM_H
