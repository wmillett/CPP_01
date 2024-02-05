#include "HumanA.hpp"


 HumanA::HumanA() : name("No name"), weapon(Weapon()){
    this->name = "No name";
    this->weapon.setType("No weapon");
 };
 HumanA::HumanA(std::string name, Weapon weapon) : name(name), weapon(weapon){
 };
HumanA::~HumanA(){

};

void HumanA::attack(void){
    std::cout << this->name << ATTACK_PHRASE << this->weapon.getType() << std::endl;
};

