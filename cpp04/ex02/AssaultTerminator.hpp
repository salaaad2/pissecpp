#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

#include <iostream>

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
    public :
        AssaultTerminator();
        AssaultTerminator(AssaultTerminator const &src);
        ~AssaultTerminator();

        AssaultTerminator * clone() const ;
        void battleCry() const;
        void rangedAttack()const;
        void meleeAttack()const;

		AssaultTerminator & operator=(AssaultTerminator const & rhs);

};
#endif
