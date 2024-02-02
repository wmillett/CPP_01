#include "Zombie.hpp"

Zombie::Zombie(){
}
Zombie::Zombie(std::string newName) : name(newName) {
}
Zombie::~Zombie(){
    std::cout << this->name << " has been destroyed.";
}

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
}
