
#include "Harl.hpp"

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