#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int
    main(void)
{
    FragTrap ft("M4NNK1773R");

    ScavTrap st("C00LM4NN");

    st.challengeNewcomer("NU705");
    ft.rangedAttack("NU705");
    ft.vaulthunter_dot_exe("NU705");

    return 0;
}
