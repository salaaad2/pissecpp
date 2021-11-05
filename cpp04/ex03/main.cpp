#include <iostream>

#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void) {
    std::cout << "====constructors ====" << std::endl;
    IMateriaSource * src = new MateriaSource();
    ICharacter * moi = new Character("moi");

    std::cout << "====lear ice and cure ====" << std::endl;
    AMateria *tmp;

    tmp = new Ice();

    src->learnMateria(tmp);
    delete tmp;
    tmp = new Cure();
    src->learnMateria(tmp);
    delete tmp;

    std::cout << "====declare pointers  ====" << std::endl;

    ICharacter * bob = new Character("bob");
    std::cout << "====create materias and give them to bob  ====" << std::endl;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    std::cout << "====use learned materias====" << std::endl;
    moi->use(0, *bob);
    moi->use(1, *bob);

    std::cout << "====prove deep copy====" << std::endl;
    Character stackman("stackman");
    tmp = src->createMateria("ice");
    stackman.equip(tmp);
    tmp = src->createMateria("cure");
    stackman.equip(tmp);
    Character copy(stackman);
    copy.use(1, stackman);
    tmp = src->createMateria("cure");
    copy.equip(tmp);


    std::cout << "====prove copy operator====" << std::endl;
    stackman = copy;


    delete bob;
    delete moi;
    delete src;

    return 0;
}
