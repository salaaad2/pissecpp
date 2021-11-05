#include <iostream>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {

    // Bureaucrat coolbureaucrat("coolguy", 12);
    // Bureaucrat coolerbureaucrat("coolerman", 150);
    Bureaucrat bill("Bill", 2);
    ShrubberyCreationForm shrub("forest");
    PresidentialPardonForm pardon("assange");
    RobotomyRequestForm robotomy("epstein");

    try
    {
        pardon.sign(bill);
        bill.executeForm(pardon);
        robotomy.sign(bill);
        bill.executeForm(robotomy);
        shrub.sign(bill);
        bill.executeForm(shrub);
    }
    catch (Form::RankTooHighException& e){
        std::cout << e.tooHigh() << std::endl;
    }
    catch (Form::RankTooLowException& e){
        std::cout << e.tooLow() << std::endl;
    }
    catch (Bureaucrat::RankTooHighException& e){
        std::cout << e.tooHigh() << std::endl;
    }
    catch (Bureaucrat::RankTooLowException& e){
        std::cout << e.tooLow() << std::endl;
    }
    // std::cout << coolbureaucrat << coolerbureaucrat;
    return 0;
}
