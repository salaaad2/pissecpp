#include <iostream>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void)
{
    std::cout << "====constructors ====" << std::endl;
    ISpaceMarine * bob = new TacticalMarine;
    ISpaceMarine * jim = new AssaultTerminator;
    ISpaceMarine * tactmar = new TacticalMarine;

    std::cout << "====add marines to squad ====" << std::endl;
    ISquad * coolsquad = new Squad;
    coolsquad->push(bob);
    coolsquad->push(tactmar);
    coolsquad->push(jim);
    std::cout << "====print squad====" << std::endl;
    for (int i = 0; i < coolsquad->getCount(); i++) {
        ISpaceMarine * cur = coolsquad->getUnit(i);
        std::cout << "next [" << i << "]"<< std::endl;
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete coolsquad;
    std::cout << "====deep copy ====" << std::endl;
    Squad squad;
    squad.push(bob);
    squad.push(tactmar);
    squad.push(jim);
    std::cout << "==== copy constructor ====" << std::endl;
    Squad * evenbettersquad = new Squad(squad);
    std::cout << "====print evenbettersquad ====" << std::endl;
    for (int i = 0; i < evenbettersquad->getCount(); i++) {
        ISpaceMarine * cur = evenbettersquad->getUnit(i);
        std::cout << "next [" << i << "]"<< std::endl;
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete evenbettersquad;
    std::cout << "====print squad depcopy====" << std::endl;
    for (int i = 0; i < squad.getCount(); i++) {
        ISpaceMarine * cur = squad.getUnit(i);
        std::cout << "next [" << i << "]"<< std::endl;
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << "====delete squad====" << std::endl;
    delete jim;
    delete bob;
    delete tactmar;
    return 0;
}
