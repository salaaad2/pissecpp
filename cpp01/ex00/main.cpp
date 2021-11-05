#include <iostream>
#include "Pony.hpp"

void
ponyOnTheHeap(void)
{
    Pony* pony = new Pony(1, 10);

    pony->set_age(12);
    pony->neigh(3);
    pony->print_age();
    delete pony;
}

void
ponyOnTheStack(void)
{
    Pony pony = Pony(2, 90);

    pony.set_age(11);
    pony.neigh(2);
    pony.print_age();
}

int
main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
}
