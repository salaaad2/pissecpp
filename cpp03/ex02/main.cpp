#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int
    main(void)
{
    FragTrap ft("M4NNK1773R");

    ScavTrap st("C00LM4NN");

    ft.meleeAttack("NU705");
    ft.rangedAttack("NU705");
    ft.vaulthunter_dot_exe("NU705");
    st.challengeNewcomer("NU705");

    return 0;
}
