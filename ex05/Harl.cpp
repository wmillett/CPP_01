
#include "Harl.hpp"


Harl::Harl(){};
Harl::~Harl(){};

void Harl::debug(void){
    std::cout << DEBUG_COMPLAINT << std::endl;
}

void Harl::info(void){
    std::cout << INFO_COMPLAINT << std::endl;
}

void Harl::warning(void){
    std::cout << WARNING_COMPLAINT << std::endl;
}

void Harl::error(void){
    std::cout << ERROR_COMPLAINT << std::endl;
}


// int simpleHash(const std::string& s) {
//     int result = 0;
//     for (std::string::const_iterator it = s.begin(); it != s.end(); ++it) {
//         result += static_cast<int>(*it);
//     }
//     return result;
// }

void Harl::complain(std::string level) {

    std::string levelComplain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*levelFunction[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++){
		if (level == levelComplain[i])
			(this->*levelFunction[i])();
    }
}
