#include "Zombie.hpp"


int main(){

int sizeHorde = 10;
std::string zombieName = "Bob";

Zombie* horde = zombieHorde(sizeHorde, zombieName);

for (int i = 0; i < sizeHorde; ++i) {
        horde[i].announce();
    }
delete[] horde;
}
