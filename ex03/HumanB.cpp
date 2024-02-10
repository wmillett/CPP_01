
#include "HumanB.hpp"

HumanB::HumanB() : name("No name"), weapon(nullptr) {
}

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {
}

HumanB::~HumanB() {
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
