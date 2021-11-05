#ifndef ROBOTOMYREQUESTFORM_H_
#define ROBOTOMYREQUESTFORM_H_

#include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:
        RobotomyRequestForm();
        std::string const & _target;
    public :
        virtual ~RobotomyRequestForm() {}
        RobotomyRequestForm(RobotomyRequestForm const & src);
        RobotomyRequestForm(std::string const & target);
        void order(bool status) const ;

        std::string const & getTarget() const ;

        RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
};

#endif // SHRUBBERYCREATIONFORM_H_
