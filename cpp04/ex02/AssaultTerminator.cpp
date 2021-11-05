#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
    std::cout << "* Teleports from space *"  << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src) {
    *this = src;
    std::cout << "* Teleports from space *"  << std::endl;
    return ;
}

AssaultTerminator *
AssaultTerminator::clone(void) const {
    AssaultTerminator * dst = new AssaultTerminator(*this);
    return (dst);
}

void
AssaultTerminator::battleCry(void) const {
    std::cout << "This code is unclean. Purify it !" << std::endl;
    return ;
}

void
AssaultTerminator::rangedAttack(void) const {
    std::cout << "* does nothing *" << std::endl;
    return ;
}

void
AssaultTerminator::meleeAttack(void) const {
    std::cout << "* attacks with chainfists *" << std::endl;
    return ;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs) {
	(void)rhs;
    return (*this);
}

AssaultTerminator::~AssaultTerminator(void) {
    std::cout << " I'll be back " << std::endl;
    return ;
}
