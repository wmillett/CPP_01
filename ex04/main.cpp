
#include "sed.hpp"

bool areStringsEmpty(const std::string& s1, const std::string& s2) {
    return s1.empty() || s2.empty();
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

     if (areStringsEmpty(s1, s2)) {
        std::cerr << "Error: Both s1 and s2 must be non-empty strings." << std::endl;
        return 1;
    }
        
    Sed sed(filename, s1, s2);
    sed.replaceStrings();

    return 0;
}
