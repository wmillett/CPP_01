#include <iostream>
#include "Weapon.hpp"



class HumanB{

    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon newWeapon);

};