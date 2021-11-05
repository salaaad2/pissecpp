#ifndef __PLASMARIFLE_H_
#define __PLASMARIFLE_H_

#include <iostream>

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    public :
        PlasmaRifle();
        PlasmaRifle(std::string name);
        PlasmaRifle(PlasmaRifle const & name);
        virtual ~PlasmaRifle() {}

        virtual void attack() const ;

        PlasmaRifle & operator=(PlasmaRifle const & rhs);
};


#endif // __PLASMARIFLE_H_
