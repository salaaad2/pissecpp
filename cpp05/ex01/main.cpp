#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {

    std::cout << "====create bureaucrats====" << std::endl;
    Bureaucrat coolbureaucrat("coolguy", 12);
    Bureaucrat coolerbureaucrat("coolerman", 150);
    Bureaucrat bill("Bill", 2);

    std::cout << "====very important stream operator overload====" << std::endl;
    std::cout << coolbureaucrat << coolerbureaucrat;
    std::cout << "====try to sign very important form====" << std::endl;
    try
    {
        Form form("killEpstein", 2, 1);
        form.sign(bill);
    }
    catch (Form::RankTooHighException& e){
        std::cout << e.tooHigh() << std::endl;
    }
    catch (Form::RankTooLowException& e){
        std::cout << e.tooLow() << std::endl;
    }
    std::cout << coolbureaucrat << coolerbureaucrat;
    try
    {
        Form form("killEpstein", 151, 1);
        form.sign(bill);
    }
    catch (Form::RankTooHighException& e){
        std::cout << e.tooHigh() << std::endl;
    }
    catch (Form::RankTooLowException& e){
        std::cout << e.tooLow() << std::endl;
    }
    std::cout << "====try to sign very important form====" << std::endl;
    try
    {
        Form nice("allow new park", 100, 100);
        nice.sign(bill);
        std::cout << "if you see this, the form was signed" << std::endl;
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
    std::cout << "====now throw exceptions ====" << std::endl;
    try
    {
        Form nice("do literally nything", 100, 100);
        nice.sign(coolerbureaucrat);
        std::cout << "if you see this, the form was signed" << std::endl;
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
    try
    {
        coolerbureaucrat.decRank();
        std::cout << "if you see this, the exception wasn't lifted" << std::endl;
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
    return 0;
}
