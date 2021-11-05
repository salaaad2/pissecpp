#include "Squad.hpp"

Squad::Squad(void) :
    _count(0), _squad(NULL)
{
    std::cout << "squad is ready to be assembled" << std::endl;
    return ;
}

Squad::Squad(Squad const &src) :
    _count(0), _squad(NULL)
{
    *this = src;
    return ;
}

Squad::~Squad() {
    int i = -1;

    while (++i < this->_count)
        delete this->_squad[i];
    delete [] _squad;
}

ISpaceMarine *
Squad::getUnit(int n) const {
    if (n < this->_count)
        return (this->_squad[n]);
    else
    {
        std::cout << "unit out of bounds" << std::endl;
        return (NULL);
    }
}

int
Squad::getCount() const {
    return (this->_count);
}

Squad &
Squad::operator=(Squad const &rhs) {
    int i;

    i = 0;
    if (this->_squad)
    {
        while (this->_count--)
            delete _squad[this->_count];
        delete [] _squad;
    }
    this->_count = rhs.getCount();
    this->_squad = new ISpaceMarine*[this->_count];
    while (i < this->_count)
    {
        this->_squad[i] = rhs._squad[i]->clone();
        i++;
    }
    return (*this);
}

int
Squad::push(ISpaceMarine * sm) {
    int i;

    i = -1;
    if (!sm || this->_count >= 4)
	{
        return (1);
	}
	while (++i < this->_count)
	{
		if (this->getUnit(i) == sm)
        {
            std::cout << "unit already present in squad" << std::endl;
            return (1);
        }
	}
    if (!this->_squad)
    {
        this->_squad = new ISpaceMarine*[1];
        this->_squad[0] = sm->clone();
        this->_count = 1;
        return (0);
    }
    ISpaceMarine ** copy = new ISpaceMarine*[this->_count + 1];
    i = -1;
    while (++i < this->_count)
    {
        copy[i] = this->_squad[i]->clone();
        delete this->_squad[i];
    }
    delete [] this->_squad;
    copy[this->_count] = sm->clone();
    this->_count++;
    this->_squad = copy;
    return (0);
}
