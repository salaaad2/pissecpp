#ifndef SQUAD_H
# define SQUAD_H

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {
    int _count;
    ISpaceMarine ** _squad;
    public :
        Squad();
        ~Squad();
        Squad(Squad const & src);
        int getCount() const;

        ISpaceMarine * getUnit(int n) const;

        int push(ISpaceMarine * member);

        Squad & operator=(Squad const & rhs);
};

#endif
