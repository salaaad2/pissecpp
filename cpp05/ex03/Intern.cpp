#include "Intern.hpp"

Intern::Intern(void) {
    std::cout << "Intern just appeared" << std::endl;
    return ;
}

Intern::Intern(Intern const &src) {
    *this = src;
    return ;
}

Intern::~Intern(void) {
    std::cout << "Intern was destroyed" << std::endl;
    return ;
}

Intern &
Intern::operator=(Intern const & rhs) {
    (void)rhs;
    return (*this);
}

typedef Form * (*formmaker)(std::string const &target);

Form *
createPardon(std::string const &target) {
    Form * ret = new PresidentialPardonForm(target);
    return (ret);
}

Form *
createRobotomy(std::string const &target) {
    Form * ret = new RobotomyRequestForm(target);
    return (ret);
}

Form *
createShrubbery(std::string const & target) {
    Form * ret = new ShrubberyCreationForm(target);
    return (ret);
}

std::string names[] =
{
    "presidential pardon",
    "shrubbery creation",
    "robotomy request"
};

formmaker forms[] =
{
    &createPardon,
    &createShrubbery,
    &createRobotomy
};

Form *
Intern::makeForm(std::string const & type, std::string const & target) const {
    Form *ret = NULL;

    for (int i = 0; i < 3; i++)
    {
        if (names[i] == type)
        {
            ret = forms[i](target);
            std::cout << "Intern creates " << ret->getName() << " form, targeting <" << target << ">" << std::endl;
            return (ret);
        }
    }
    std::cout << "The massive idiot we use as intern failed to make the form" << std::endl;
    return (ret);
}
