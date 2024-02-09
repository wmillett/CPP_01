#include "Harl.hpp"


LogLevel stringToLogLevel(const std::string& logLevelStr) {
    std::string upperCaseStr = logLevelStr;
    std::transform(upperCaseStr.begin(), upperCaseStr.end(), upperCaseStr.begin(), ::toupper);

    if (upperCaseStr == "DEBUG") {
        return DEBUG;
    } else if (upperCaseStr == "INFO") {
        return INFO;
    } else if (upperCaseStr == "WARNING") {
        return WARNING;
    } else if (upperCaseStr == "ERROR") {
        return ERROR;
    } else {
        return INVALID;
    }
}

int main(int argc, char** argv) {
    
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <log_level>" << std::endl;
        return 1;
    }
    LogLevel logLevel = stringToLogLevel(argv[1]);
    Harl harl;
    switch (logLevel) {
        case DEBUG:
            harl.complain("DEBUG");
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case INFO:
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case WARNING:
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case ERROR:
            harl.complain("ERROR");
            break;
        case INVALID:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return 0;
    }
    return 0;
}
