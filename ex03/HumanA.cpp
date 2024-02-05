#include "HumanA.hpp"


 HumanA::HumanA(){
    this->name = "No name";
    this->weapon.setType("No weapon");
 };
 HumanA::HumanA(std::string name, std::string type) : name(name), weapon(type){
 };
HumanA::~HumanA(){

};

void HumanA::attack(void){
    std::cout << this->name << ATTACK_PHRASE << this->weapon << std::endl;
};

