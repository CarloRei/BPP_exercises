#include <sstream>
#include <string>
#include <iostream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    std::string token;
    while (std::getline(ss, token, ' ')) {
        std::cout << token << std::endl;
    }
    return 0;
}
