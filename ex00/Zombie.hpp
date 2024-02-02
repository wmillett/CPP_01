

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cctype>
# include <sstream>
# include <iomanip>

# define TRUE 1
# define FALSE 0
# define CLEAR_TERM "\033[2J"
# define SET_TOP "\033[H"
# define SET_TERM "\033[2J\033[H"
# define SET_LEN std::setw(10)

class Zombie {
    public:
        Zombie();
        ~Zombie();
        Zombie* newZombie( std::string name );
    private:
        void announce( void );
        void randomChump( std::string name );
};
#endif