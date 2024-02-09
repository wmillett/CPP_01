
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


int simpleHash(const std::string& s) {
    int result = 0;
    for (std::string::const_iterator it = s.begin(); it != s.end(); ++it) {
        result += static_cast<int>(*it);
    }
    return result;
}

void Harl::complain(std::string level) {


    // std::map<std::string, ComplaintFunction> complaintMap;
    // complaintMap["DEBUG"] = &Harl::debug;
    // complaintMap["INFO"] = &Harl::info;
    // complaintMap["WARNING"] = &Harl::warning;
    // complaintMap["ERROR"] = &Harl::error;
    // std::map<std::string, ComplaintFunction>::iterator it = complaintMap.find(level);
    // if (it != complaintMap.end()) {
    //     (this->*(it->second))();
    // } else {
    //     std::cerr << "Invalid complaint level: " << level << std::endl;
    // }







    //  auto hash = simpleHash(level);
    //     int levelHash = hash(level);

    //     switch (levelHash) {
    //         case hash("DEBUG"):
    //             debug();
    //             break;
    //         case hash("INFO"):
    //             info();
    //             break;
    //         case hash("WARNING"):
    //             warning();
    //             break;
    //         case hash("ERROR"):
    //             error();
    //             break;
    //         default:
    //             std::cout << "Unknown complaint level: " << level << "\n";
    //     }
}

// void Harl::*fctPointer[4]() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

using HarlFuncPtr = void (Harl::*)();

HarlFuncPtr fctPointer[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};