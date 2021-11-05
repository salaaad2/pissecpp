#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int rank) :
    _name(name) {
    this->setRank(rank);
    std::cout << "Bureaucrat just appeared" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) :
    _name(src.getName()), _rank(src.getRank())
{
    return ;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Bureaucrat was destroyed" << std::endl;
    return ;
}

Bureaucrat &
Bureaucrat::operator=(Bureaucrat const &rhs) {
    this->_rank = rhs.getRank();
    return (*this);
}

void
Bureaucrat::executeForm(Form const & form) const {
    std::cout << "<" << this->getName() << "> executes <" << form.getName() << std::endl;
    form.execute(*this);
}

void
Bureaucrat::setRank(int rank) {
    if (rank > 150) {
        throw RankTooLowException();
    }
    if (rank < 1) {
        throw RankTooHighException();
    }
    else {
        this->_rank = rank;
    }
}

void
Bureaucrat::incRank() {
    this->_rank -= (this->getRank() >= 1) ? 1 : 0;
    return ;
}

void
Bureaucrat::decRank() {
    this->_rank += (this->getRank() <= 149) ? 1 : 0;
    return ;
}

unsigned int
Bureaucrat::getRank() const {
    return (this->_rank);
}

std::string const &
Bureaucrat::getName() const {
    return (this->_name);
}

std::ostream &
operator<<(std::ostream & o, Bureaucrat const & rhs) {
    o << "<" << rhs.getName() << ">, bureaucrat rank <" << rhs.getRank() << ">." << std::endl;
    return (o);
}
