
#include "Harl.hpp"

void Harl::debug(void){
    if(this->filter == 0)
        std::cout << DEBUG_COMPLAINT << std::endl;
}

void Harl::info(void){
    if(this->filter <= 1)
        std::cout << INFO_COMPLAINT << std::endl;
}

void Harl::warning(void){
    if(this->filter <= 2)
        std::cout << WARNING_COMPLAINT << std::endl;
}

void Harl::error(void){
    std::cout << ERROR_COMPLAINT << std::endl;
}


 void Harl::complain(std::string level) {

    std::string levelComplain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*levelFunction[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++){
		if (level == levelComplain[i])
			(this->*levelFunction[i])();
    }
}
