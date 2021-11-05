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
    this->setRank(this->getRank() - 1);
    return ;
}

void
Bureaucrat::decRank() {
    this->setRank(this->getRank() + 1);
    return ;
}

int
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
