#include <iostream>
#include "Sorcerer.hpp"

#include "Peon.hpp"
#include "Farmer.hpp"

int main(void) {
    std::cout << "====constructors ====" << std::endl;
    Sorcerer qwe("jean", "le sorcier qui s'appelle jean");

    Victim jim("jim");
    Peon jack("jack");
    Farmer mylene("mylene");

    std::cout << "====operator overload test====" << std::endl;
    qwe.announce();
    std::cout << qwe << jim << jack << mylene;

    std::cout << "====polymorph test : outputs should be different====" << std::endl;
    qwe.polymorph(jim);
    qwe.polymorph(jack);
    qwe.polymorph(mylene);

    std::cout << "====destructors ====" << std::endl;

    return 0;
}
