#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
    std::string _name;
    std::string _type;
    public:
        Zombie();
        ~Zombie();
        void setAttributes(std::string type, std::string name);
        void setType(std::string type);
        std::string getType() const ;
        void setName(std::string name);
        std::string getName() const ;
        void advert() const ;
};

#endif // ZOMBIE_H
