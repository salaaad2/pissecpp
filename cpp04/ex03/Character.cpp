#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _m(NULL), _num(0){
    std::cout << "Character just appeared" << std::endl;
    return ;
}

Character::~Character() {
	unsigned int i = 0;

	while (++i < this->_num)
	{
		delete this->_m[i];
	}
    delete [] this->_m;
}


Character::Character(Character const & src) {
    *this = src;
    return ;
}

Character const &
Character::operator=(Character const & rhs) {
    int i;

    i = -1;
    if (this->_m)
    {
        while (++i < (int)this->_num)
            delete this->_m[i];
        delete [] this->_m;
    }
    this->_num = rhs._num;
    this->_m = new AMateria*[this->_num];
    i = -1;
    while (++i < (int)this->_num)
    {
        this->_m[i] = rhs._m[i]->clone();
    }
    return (*this);
}

std::string const &
Character::getName() const {
    return (this->_name);
}

void
Character::equip(AMateria *m) {
    unsigned int i;

    i = 0;
    if (m == NULL || this->_num >= 4)
    {
        return ;
    }
	while (i < this->_num)
	{
		if (this->_m[i] == m)
        {
            std::cout << "character already knows this spell" << std::endl;
            return ;
        }
        i++;
	}
    if (!this->_m)
    {
        this->_m = new AMateria*[1];
        this->_m[0] = m->clone();
        this->_num = 1;
        std::cout << "Character inventory init" << std::endl;
        return ;
    }
    AMateria ** copy = new AMateria*[this->_num + 1];
    i = 0;
    while (i < this->_num)
    {
        copy[i] = this->_m[i]->clone();
        delete this->_m[i];
        i++;
    }
    delete [] this->_m;
    copy[this->_num] = m->clone();
    this->_num++;
    this->_m = copy;
    return ;
}
void
Character::unequip(int idx) {
    std::cout << "unequipped materia number " << idx << std::endl;
}

void
Character::use(int idx, ICharacter& target) {
    if ((unsigned int)idx < this->_num)
    {
        this->_m[idx]->use(target);
    }
}
