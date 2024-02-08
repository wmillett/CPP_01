// #ifndef HUMANB_HPP
// # define HUMANB_HPP

// #include <iostream>
// #include "Weapon.hpp"



// class HumanB{

//     private:
//         std::string name;
//         Weapon& weapon;
//     public:
//         HumanB();
//         HumanB(std::string name);
//         ~HumanB();
//         void attack(void);
//         void setWeapon(Weapon newWeapon);

// };
// #endif

// HumanB.hpp
// #ifndef HUMANB_HPP
// # define HUMANB_HPP

// #include <iostream>
// #include "Weapon.hpp"

// class HumanB {
// private:
//     std::string name;
//     const Weapon& weapon;  // Change to const reference
// public:
//     HumanB();
//     HumanB(std::string name);
//     ~HumanB();
//     void attack(void);
//     void setWeapon(const Weapon& newWeapon);  // Change to const reference
// };

// #endif

// HumanB.hpp
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
