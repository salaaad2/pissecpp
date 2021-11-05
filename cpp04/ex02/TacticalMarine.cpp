#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine Ready for action" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
    *this = src;
    std::cout << "Tactical Marine Ready for action" << std::endl;
    return ;
}

TacticalMarine *
TacticalMarine::clone(void) const {
    TacticalMarine * dst = new TacticalMarine(*this);
    return (dst);
}

void
TacticalMarine::battleCry(void) const {
    std::cout << "For the holy PLOT !" << std::endl;
    return ;
}

void
TacticalMarine::rangedAttack(void) const {
    std::cout << "* attacks with a bolter *" << std::endl;
    return ;
}

void
TacticalMarine::meleeAttack(void) const {
    std::cout << "* attacks with a chainsword *" << std::endl;
    return ;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs) {
	(void)rhs;
    return (*this);
}
TacticalMarine::~TacticalMarine(void) {
    std::cout << "Aaargh ... " << std::endl;
    return ;
}
