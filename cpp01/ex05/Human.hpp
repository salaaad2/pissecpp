#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"

class Human {
    Brain _brain;
    Brain& _brainRef;
    public:
        Human();
        ~Human();
        std::string identify(void);
        Brain& getBrain(void);
};

#endif // HUMAN_H
