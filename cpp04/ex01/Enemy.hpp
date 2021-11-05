#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy{
    private:
        int _hp;
        std::string _type;
    public:
        Enemy(Enemy const &src);
        Enemy(int hp, std::string const & type);
        virtual ~Enemy();

        std::string const & getType() const;
        int getHP() const;

        void setHP(int hp);
        void setType(std::string const & type);

        virtual void takeDamage(int damage);

        Enemy & operator=(Enemy const &rhs);
};

#endif // ENEMY_H
