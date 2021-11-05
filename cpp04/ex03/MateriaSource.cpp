#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _ms(NULL), _count(0) {}

MateriaSource::MateriaSource(MateriaSource & src) {
    *this = src;
    return ;
}

MateriaSource::~MateriaSource() {
    int i = -1;

    while (++i < (int)this->_count)
        delete this->_ms[i];
    delete [] _ms;
}

MateriaSource &
MateriaSource::operator=(MateriaSource const &rhs) {
    unsigned int i;

    i = 0;
    if (this->_ms)
    {
        while (this->_count--)
            delete _ms[this->_count];
        delete [] _ms;
    }
    this->_count = rhs._count;
    this->_ms = new AMateria*[this->_count];
    while (i < this->_count)
    {
        this->_ms[i] = rhs._ms[i]->clone();
        i++;
    }
    return (*this);
}

void
MateriaSource::learnMateria(AMateria *m) {
    unsigned int i;

    i = 0;
    if (!m || this->_count >= 4)
    {
        std::cout << "materia is null" << std::endl;
        return ;
    }
    while (i < this->_count)
    {
        if (this->_ms[i] == m)
        {
            std::cout << "materia already present in squad" << std::endl;
            return ;
        }
        i++;
    }
    if (!this->_ms)
    {
        this->_ms = new AMateria*[1];
        this->_ms[0] = m->clone();
        this->_count = 1;
        return ;
    }
    AMateria ** copy = new AMateria*[this->_count + 1];
    i = 0;
    while (i < this->_count)
    {
        copy[i] = this->_ms[i]->clone();
        delete this->_ms[i];
        i++;
    }
    delete [] this->_ms;
    copy[this->_count] = m->clone();
    this->_count++;
    this->_ms = copy;
    return ;
}

AMateria *
MateriaSource::createMateria(std::string const &type) {
    AMateria * newMateria;

    if (!type.compare("ice"))
        newMateria = new Ice();
    else if (!type.compare("cure"))
        newMateria = new Cure();
    else
        return (NULL);
    std::cout << "created materia : " << newMateria->getType() << std::endl;
    return (newMateria);
}
