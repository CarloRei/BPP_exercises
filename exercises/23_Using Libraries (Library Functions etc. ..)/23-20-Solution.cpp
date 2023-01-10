#include <iostream>
#include <regex>

int main() {
    std::string email;
    std::cin >> email;
    std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    if (std::regex_match(email, pattern)) {
        std::cout << "valid email address" << std::endl;
    } else {
        std::cout << "invalid email address" << std::endl;
    }
    return 0;
}
