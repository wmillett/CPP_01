#include "HumanB.hpp"


 HumanB::HumanB(){
    this->name = "No name";
    this->setWeapon("No weapon");
 };
 HumanB::HumanB(std::string name) : name(name){
    this->setWeapon("No weapon");
 };
HumanB::~HumanB(){

};

void HumanB::attack(void){
    std::cout << this->name << ATTACK_PHRASE << this->weapon << std::endl;
};

void HumanB::setWeapon(Weapon newWeapon){
    this->weapon.setType(newWeapon.getType());
};
