#ifndef __POWERFIST_H_
#define __POWERFIST_H_

#include <iostream>

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
    public :
        PowerFist();
        PowerFist(std::string name);
        PowerFist(PowerFist const & name);
        virtual ~PowerFist() {}

        virtual void attack() const ;

        PowerFist & operator=(PowerFist const & rhs);
};


#endif // __PLASMARIFLE_H_
