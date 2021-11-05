#include <iostream>

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {

    // Bureaucrat coolbureaucrat("coolguy", 12);
    // Bureaucrat coolerbureaucrat("coolerman", 150);
    Bureaucrat bill("Bill", 2);
    // ShrubberyCreationForm shrub("tree");
    // PresidentialPardonForm pardon("assange");
    // RobotomyRequestForm robotomy("epstein");
    Intern filou;

    std::cout << "======inter creates form======" << std::endl;
    Form *pardon = filou.makeForm("presidential pardon", "assange");
    Form *shrub = filou.makeForm("shrubbery creation", "forest");
    try
    {
        pardon->sign(bill);
        shrub->sign(bill);
        bill.executeForm(*shrub);
        bill.executeForm(*pardon);
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
    //std::cout << coolbureaucrat << coolerbureaucrat;
    return 0;
}
