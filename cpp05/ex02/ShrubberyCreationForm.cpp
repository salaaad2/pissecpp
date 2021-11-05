#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
    Form("shrubberyCreation", 145, 137), _target(this->getTarget()) {
    *this = src;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
    Form("shrubberyCreation", 145, 137), _target(target) {
    std::cout << "this form is of type <shrubbery>" << std::endl;
    return ;
}

std::string const &
ShrubberyCreationForm::getTarget() const {
    return this->_target;
}

void
ShrubberyCreationForm::order(bool status) const {
    (void)status;
    std::ofstream ofs;
    std::string fname(this->_target);
    fname += "_shrubbery";
    ofs.open(fname.c_str());
    std::cout << "perform actions on this tree : " << this->_target << std::endl;
    ofs << "            # #### ####\n";
    ofs << "        ### |/#|### |/####\n";
    ofs << "        ##|/#/ |||/##/_/##/_#\n";
    ofs << "        ###  |/###|/ |/ # ###\n";
    ofs << "    ##_|_#|_|## | #/###_/_####\n";
    ofs << "    ## #### # | #| /  #### ##/##\n";
    ofs << "    __#_--###`  |{,###---###-~\n";
    ofs << "                | }{\n";
    ofs << "                }}{\n";
    ofs << "                }}{\n";
    ofs << "                {{}\n";
    ofs << "        , -=-~{ .-^- _\n";
    ofs << "                `}\n";
    ofs << "                {\n";
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    (void)rhs;
    return (*this);
}
