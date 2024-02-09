
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

void Harl::complain(std::string level) {

    std::map<std::string, ComplaintFunction> complaintMap;
    complaintMap["DEBUG"] = &Harl::debug;
    complaintMap["INFO"] = &Harl::info;
    complaintMap["WARNING"] = &Harl::warning;
    complaintMap["ERROR"] = &Harl::error;
    std::map<std::string, ComplaintFunction>::iterator it = complaintMap.find(level);
    if (it != complaintMap.end()) {
        (this->*(it->second))();
    } else {
        std::cerr << "Invalid complaint level: " << level << std::endl;
    }
}
