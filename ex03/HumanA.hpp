#include <iostream>
#include "Weapon.hpp"



class HumanA{

    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanA();
        HumanA(std::string name, Weapon type);
        ~HumanA();
        void attack(void);
};
