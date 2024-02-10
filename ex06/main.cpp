#include "Harl.hpp"


LogLevel stringToLogLevel(const std::string& logLevel) {
    std::string levelComplain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    LogLevel logEnum[4] = {DEBUG, INFO, WARNING, ERROR};

	for (int i = 0; i < 4; i++){
		if (logLevel == levelComplain[i])
			return logEnum[i];
    }
    return INVALID;
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
            harl.filter = 0;
            break;
        case INFO:
            harl.filter = 1;
            break;
        case WARNING:
            harl.filter = 2;
            break;
        case ERROR:
            harl.filter = 3;
            break;
        case INVALID:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return 0;
    }
    
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    return 0;
}
