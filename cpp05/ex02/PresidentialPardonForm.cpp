#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
    Form("Presidential pardon", 25, 5), _target(this->getTarget()) {
    *this = src;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
    Form("Presidential pardon", 25, 5), _target(target) {
    std::cout << "this form is of type <Presidential Pardon>" << std::endl;
    return ;
}

std::string const &
PresidentialPardonForm::getTarget() const {
    return this->_target;
}

void
PresidentialPardonForm::order(bool status) const {
    if (status == 1)
        std::cout << "<" << this->_target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        std::cout << "Not enough power to pardon this person sorry, try again soon" << std::endl;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    (void)rhs;
    return (*this);
}
