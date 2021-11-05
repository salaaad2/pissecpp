#ifndef PRESIDENTIALPARDONFORM_H_
#define PRESIDENTIALPARDONFORM_H_

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
        PresidentialPardonForm();
        std::string const & _target;
    public :
        virtual ~PresidentialPardonForm() {}
        PresidentialPardonForm(PresidentialPardonForm const & src);
        PresidentialPardonForm(std::string const & target);
        void order(bool status) const ;

        std::string const & getTarget() const ;

        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
};

#endif // SHRUBBERYCREATIONFORM_H_
