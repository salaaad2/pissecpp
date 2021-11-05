#ifndef __AWEAPON_H_
#define __AWEAPON_H_

#include <iostream>

class AWeapon {
    private :
        std::string _sound;
        std::string _name;
        int _apcost;
        int _damage;
    public :
        AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & name);
        virtual ~AWeapon();

        virtual void attack() const = 0;


        int getAPCost() const ;
        int getDamage() const ;
        std::string const & getName() const ;
        std::string const & getSound() const ;

        void setAPCost(int value) ;
        void setDamage(int value) ;
        void   setName(std::string const & name) ;
        void  setSound(std::string const & sound) ;

        virtual AWeapon & operator=(AWeapon const & rhs);
};


#endif // __AWEAPON_H_
