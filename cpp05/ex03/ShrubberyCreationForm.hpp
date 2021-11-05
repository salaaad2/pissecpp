#ifndef SHRUBBERYCREATIONFORM_H_
#define SHRUBBERYCREATIONFORM_H_

#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    private:
        ShrubberyCreationForm();
        std::string const & _target;
    public :
        virtual ~ShrubberyCreationForm() {}
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm(std::string const & target);
        void order(bool status) const ;

        std::string const & getTarget() const ;

        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
};

#endif // SHRUBBERYCREATIONFORM_H_
