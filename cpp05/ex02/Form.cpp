#include "Form.hpp"

Form::Form(std::string const & name, unsigned int signRank, unsigned int execRank) :
    _issigned(false), _name(name), _reqSignRank(setRank(signRank)) , _reqExecRank(setRank(execRank)) {
    std::cout << "Form just appeared" << std::endl;
    return ;
}

Form::Form(Form const & src) :
    _issigned(src.getStatus()), _name(src.getName()), _reqSignRank(src.getSignReqRank()) , _reqExecRank(src.getExecReqRank()) {
    return ;
}

Form::~Form(void) {
    std::cout << "Form was destroyed" << std::endl;
    return ;
}

Form &
Form::operator=(Form const &rhs) {
    this->_issigned = rhs.getStatus();
    return (*this);
}

void
Form::sign(Bureaucrat const & bureaucrat) {
    if ((bureaucrat.getRank() > this->getExecReqRank()) ||
        (bureaucrat.getRank() > this->getSignReqRank())) {
        throw RankTooLowException();
    }
    else {
        this->_issigned = true;
    }
}

void
Form::execute(Bureaucrat const & executor) const {
    if (getStatus() == false) {
        std::cout << "for hasn't been signed... yet " << std::endl;
    }
    if (executor.getRank() < getExecReqRank())
        this->order(true);
    else {
        this->order(false);
        std::cout << "form need to be executed by a higher ranking bure- official" << std::endl;
    }
}

unsigned int
Form::setRank(int rank) {
    if (rank > 150) {
        throw RankTooLowException();
    }
    if (rank < 1) {
        throw RankTooHighException();
    }
    else {
        return (rank);
    }
}


unsigned int
Form::getSignReqRank() const {
    return (this->_reqSignRank);
}

unsigned int
Form::getExecReqRank() const {
    return (this->_reqExecRank);
}

std::string const &
Form::getName() const {
    return (this->_name);
}

bool
Form::getStatus() const {
    return (this->_issigned);
}

std::ostream &
operator<<(std::ostream & o, Form const & rhs) {
    o << "<" << rhs.getName() << ">, form that requires rank <" << rhs.getSignReqRank() << "> to be signed." << std::endl;
    return (o);
}
