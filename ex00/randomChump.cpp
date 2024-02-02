#include "Zombie.hpp"

void Zombie::randomChump( std::string name ){
    Zombie tmp;
    tmp.name = name;
    tmp.announce();

}
