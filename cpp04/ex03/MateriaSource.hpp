#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <iostream>

#include "IMateriaSource.hpp"

#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource {
    AMateria ** _ms;
    unsigned int _count;
    public :
        MateriaSource();
        MateriaSource(MateriaSource & src);
        virtual ~MateriaSource();
        void learnMateria(AMateria *m);
        AMateria * createMateria(std::string const &type);

        MateriaSource & operator=(MateriaSource const &rhs);
};

#endif // IMATERIASOURCE_H
