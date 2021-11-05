#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
    std::string _stype;
    public:
        ZombieEvent();
        ~ZombieEvent();
        Zombie *		newZombie(std::string name) const;
        Zombie *		randomChump(void);
        std::string	getZombieType(void) const;
        void			setZombieType(std::string type);
};

#endif // ZOMBIE_EVENT_HPP
