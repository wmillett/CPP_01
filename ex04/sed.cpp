
#include "sed.hpp"
#include <iostream>
#include <fstream>

Sed::Sed(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2) {}

void Sed::replaceStrings() {
    std::ifstream input(filename);
    if (!input.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::ofstream output(filename + ".replace");
    if (!output.is_open()) {
        std::cerr << "Error creating/overwriting output file." << std::endl;
        input.close();
        return;
    }

    std::string line;
    while (std::getline(input, line)) {
        replaceOccurrence(line, s1, s2);
        output << line << '\n';
    }

    std::cout << "Replacement completed successfully. Check " << filename + ".replace" << std::endl;

    input.close();
    output.close();
}

void Sed::replaceOccurrence(std::string& str, const std::string& oldStr, const std::string& newStr) {
    size_t pos = 0;
    while ((pos = str.find(oldStr, pos)) != std::string::npos) {
        str = str.substr(0, pos) + newStr + str.substr(pos + oldStr.length());
        pos += newStr.length();
    }
}
