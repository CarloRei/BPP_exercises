#include <unordered_map>
#include <string>
#include <iostream>

int main() {
    std::unordered_map<std::string, std::string> dictionary;
    dictionary["hello"] = "greeting";
    dictionary["world"] = "planet Earth";
    std::string word;
    std::cin >> word;
    std::cout << dictionary[word] << std::endl;
    return 0;
}
