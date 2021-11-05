#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
    int	_iq;
    public:
        Brain();
        ~Brain();
        void setIq(int iq);
        int getIq(void) const;
        std::string identify();
};

#endif // BRAIN_H
