#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
    std::string _name;
    std::string _type;
    public:
        Zombie(std::string name, std::string type);
        ~Zombie();
        void advert() const ;
        void setType(std::string type);
        std::string getType() const ;
        void setName(std::string name);
        std::string getName() const ;
};

#endif // ZOMBIE_H
