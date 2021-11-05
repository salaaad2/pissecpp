#ifndef __POWERFIST_H_
#define __POWERFIST_H_

#include <iostream>

#include "AWeapon.hpp"

class PipeGun : public AWeapon {
    public :
        PipeGun();
        PipeGun(std::string name);
        PipeGun(PipeGun const & name);
        virtual ~PipeGun() {}

        virtual void attack() const ;

        PipeGun & operator=(PipeGun const & rhs);
};


#endif // __PLASMARIFLE_H_
