#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int
    main(void)
{
    FragTrap ft2("M4NNK1773R");

    ScavTrap st2("C00LM4NN");

    NinjaTrap ninja("ninja");
    NinjaTrap ninja2("worst ninja in hostory");

    ft2.rangedAttack("NU705");
    st2.challengeNewcomer("80705");

    ninja.ninjaShoebox(ft2);
    ninja.ninjaShoebox(st2);
    ninja.ninjaShoebox(ninja2);

    return 0;
}
