#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <cctype>
#include <iostream>
#define ATTACK_PHRASE ": attacks with their "

class Weapon {
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType() const;
        void setType(std::string type);
};

#endif