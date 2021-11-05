#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
    Form("shrubberyCreation", 145, 137), _target(this->getTarget()) {
    *this = src;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
    Form("Robotomy request", 72, 45), _target(target) {
    std::cout << "this form is of type <Robotomy Request>" << std::endl;
    return ;
}

std::string const &
RobotomyRequestForm::getTarget() const {
    return this->_target;
}

void
RobotomyRequestForm::order(bool status) const {
    if (status == 1)
        std::cout << "<" << this->_target << "> has been robotomized" << std::endl;
    else
        std::cout << "Not enough power to robotomize this person, sorry, try again soon" << std::endl;
}


RobotomyRequestForm &
RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    (void)rhs;
    return (*this);
}
