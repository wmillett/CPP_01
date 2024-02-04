
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cctype>
# include <sstream>
# include <iomanip>

# define TRUE 1
# define FALSE 0

class Zombie {
    public:
        Zombie();
        Zombie(std::string newName);
        ~Zombie();
        void announce( void );
        void setName(std::string name);
    private:
        std::string name;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif