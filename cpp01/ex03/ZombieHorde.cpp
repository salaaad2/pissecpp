#include <cstdlib>

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n)
{
    int			i;
    std::string	nameList[7] = {"Philippe",
        "Louis", "Henry", "Jean", "Charles", "Clovis", "Pierre"};

    i = 0;
    this->_horde = new Zombie[n];
    std::cout << "zombies have spawned, and thay're confused" << std::endl;
    srand(time(NULL));
    while (i < n)
    {
        _horde[i].setAttributes(nameList[std::rand() % 7], "grunt");
        i++;
    }
    this->announce(n);
}


ZombieHorde::~ZombieHorde()
{
    delete [] _horde;
}

void
ZombieHorde::announce(int number) const
{
    int i;

    i = 0;
    while (i < number)
    {
        this->_horde[i].advert();
        i++;
    }
}
