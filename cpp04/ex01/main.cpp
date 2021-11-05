#include <iostream>

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main(void) {

	std::cout << "==========Constructors======="<< std::endl;
    Character * chr = new Character("John");

    std::cout << *chr;

    AWeapon * plasmarifle = new PlasmaRifle("coolplasmarifle");
    AWeapon * powerfist = new PowerFist("bigassFist");

    Enemy * radscorp = new RadScorpion();
    Enemy * mutant = new SuperMutant();
	std::cout << "==============================" << std::endl;


	std::cout << "==========Attacks======="<< std::endl;
    chr->equip(plasmarifle);
    std::cout << *chr;
    chr->equip(powerfist);

    chr->attack(radscorp);
    std::cout << *chr;
	std::cout << "=============kill radscorp : =================" << std::endl;
    chr->attack(radscorp);
    std::cout << *chr;
    chr->attack(radscorp);
    std::cout << *chr;

    chr->recoverAP();
    chr->attack(mutant);
    std::cout << *chr;
    chr->equip(powerfist);
    std::cout << *chr;
    chr->attack(mutant);
    std::cout << *chr;
    chr->attack(mutant);
    std::cout << *chr;

    chr->attack(mutant);
    std::cout << *chr;
    chr->recoverAP();

	std::cout << "=============kill supermutant : =================" << std::endl;
    chr->attack(mutant);
    std::cout << *chr;
	std::cout << "==============================" << std::endl;
	std::cout << "=============Destroy weapons : =================" << std::endl;
	delete mutant;
	delete radscorp;
	delete plasmarifle;
	delete powerfist;
	delete chr;

    return 0;
}
