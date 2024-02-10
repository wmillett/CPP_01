
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    const Weapon* weapon;
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(const Weapon& newWeapon);
};

#endif
