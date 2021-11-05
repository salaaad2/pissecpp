#ifndef INTERN_H
#define INTERN_H

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

class Intern {
    public :
        Intern();
        Intern(Intern const &src);
        ~Intern();
        Form * makeForm(std::string const & type, std::string const & target) const ;

        Intern & operator=(Intern const & rhs);
};

#endif // INTERN_H
