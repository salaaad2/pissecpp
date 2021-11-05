#include <iostream>

#include "Bureaucrat.hpp"

int main(void) {

    Bureaucrat coolbureaucrat("coolguy", 12);
    Bureaucrat coolerbureaucrat("coolerman", 150);
    try
    {
        Bureaucrat bob("bobo", -1);
    }
    catch (Bureaucrat::RankTooHighException& e){
        std::cout << e.tooHigh() << std::endl;
    }
    catch (Bureaucrat::RankTooLowException& e){
        std::cout << e.tooLow() << std::endl;
    }
    std::cout << coolbureaucrat << coolerbureaucrat;
    try
    {
        Bureaucrat bob("bobo", 151);
    }
    catch (Bureaucrat::RankTooHighException& e){
        std::cout << e.tooHigh() << std::endl;
    }
    catch (Bureaucrat::RankTooLowException& e){
        std::cout << e.tooLow() << std::endl;
    }
    std::cout << coolbureaucrat << coolerbureaucrat;
    return 0;
}
