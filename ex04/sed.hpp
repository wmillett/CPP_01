
#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <cctype>

class Sed {
public:
    Sed(const std::string& filename, const std::string& s1, const std::string& s2);

    void replaceStrings();

private:
    void replaceOccurrence(std::string& str, const std::string& oldStr, const std::string& newStr);

    std::string filename;
    std::string s1;
    std::string s2;
};

#endif
