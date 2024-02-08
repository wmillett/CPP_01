// #include "HumanB.hpp"


//  HumanB::HumanB(){
//     this->weapon = Weapon();
//     // this->name = "No name";
//     // this->setWeapon("No weapon");
//  };
//  HumanB::HumanB(std::string name) : name(name){
//     this->weapon = Weapon();
//  };
// HumanB::~HumanB(){

// };

// void HumanB::attack(void){
//     std::cout << this->name << ATTACK_PHRASE << this->weapon.getType() << std::endl;
// };

// void HumanB::setWeapon(Weapon newWeapon){
//     this->weapon.setType(newWeapon.getType());
// };

// HumanB.cpp
// #include "HumanB.hpp"

// HumanB::HumanB() : name("No name"), weapon(Weapon()) {
//     // Initialize other members if needed
// }

// HumanB::HumanB(std::string name) : name(name), weapon(Weapon()) {
//     // Initialize other members if needed
// }

// HumanB::~HumanB() {
//     // Destructor body
// }

// void HumanB::attack() {
//     std::cout << this->name << ATTACK_PHRASE << this->weapon.getType() << std::endl;
// }

// void HumanB::setWeapon(Weapon newWeapon) {
//     this->weapon.setType(newWeapon.getType());
// }

// HumanB.cpp
// #include "HumanB.hpp"

// HumanB::HumanB() : name("No name"), weapon(Weapon()) {
//     // Initialize other members if needed
// }

// HumanB::HumanB(std::string name) : name(name), weapon(Weapon()) {
//     // Initialize other members if needed
// }

// HumanB::~HumanB() {
//     // Destructor body
// }

// void HumanB::attack() {
//     std::cout << this->name << ATTACK_PHRASE << this->weapon.getType() << std::endl;
// }

// void HumanB::setWeapon(const Weapon& newWeapon) {
//     // You might need to decide how to handle changing the weapon reference
//     // For now, it just prints the type.
//     std::cout << "Setting weapon for HumanB " << this->name << " to " << newWeapon.getType() << std::endl;
// }

// HumanB.cpp
#include "HumanB.hpp"

HumanB::HumanB() : name("No name"), weapon(nullptr) {
    // Initialize other members if needed
}

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {
    // Initialize other members if needed
}

HumanB::~HumanB() {
    // Destructor body
}

void HumanB::attack() {
    if (weapon) {
        std::cout << this->name << ATTACK_PHRASE << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->name << " has no weapon!" << std::endl;
    }
}

void HumanB::setWeapon(const Weapon& newWeapon) {
    this->weapon = &newWeapon;
}
