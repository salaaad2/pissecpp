#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include <iostream>

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
    public :
        TacticalMarine();
        TacticalMarine(TacticalMarine const &src);
        ~TacticalMarine();

        TacticalMarine * clone() const ;
        void battleCry() const;
        void rangedAttack()const;
        void meleeAttack()const;

		TacticalMarine & operator=(TacticalMarine const & rhs);
};

#endif
