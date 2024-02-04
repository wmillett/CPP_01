#include "Zombie.hpp"

Zombie::Zombie(){
}
// Zombie::Zombie(std::string newName){
//     this->setName(newName);
// }
Zombie::Zombie(std::string newName) : name(newName) {
}
// Zombie::Zombie(std::string newName) : name(std::move(newName)) {}
// Zombie::Zombie(const Zombie& other) : name(other.name) {}
// Zombie& Zombie::operator=(const Zombie& other) {
//     if (this != &other) {
//         this->name = other.name;
//     }
//     return *this;
// }
Zombie::~Zombie(){
    std::cout << this->name << " has been destroyed." << std::endl;
}

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    this->name = name;
}