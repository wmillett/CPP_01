#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <map>
# include <cctype>
# include <functional>

# define DEBUG_COMPLAINT "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define INFO_COMPLAINT "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define WARNING_COMPLAINT "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
# define ERROR_COMPLAINT "ERROR: This is unacceptable! I want to speak to the manager now."


class Harl{

    private:
        typedef void (Harl::*ComplaintFunction)();
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(std::string level);
};



#endif