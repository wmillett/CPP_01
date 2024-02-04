# include <iostream>
# include <cctype>


int main(){

std::string str = "HI THIS IS BRAIN";
std::string* stringPTR = &str;
std::string& stringREF = str;

std::cout << "Memory adress of string: " << &str << std::endl;
std::cout << "Memory adress of pointer: " << stringPTR << std::endl;
std::cout << "Memory adress of reference: " << &stringREF << std::endl;

std::cout << "Value of variable: " << str << std::endl;
std::cout << "Value pointed by pointer: " << *stringPTR << std::endl;
std::cout << "Value pointed by reference: " << stringREF << std::endl;
}
