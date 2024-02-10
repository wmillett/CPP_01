#include "Harl.hpp"

typedef void (Harl::*MemberFunction)();

int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    harl.complain("INVALID_LEVEL");

    return 0;
}
