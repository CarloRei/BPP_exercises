#include <iostream>       // std::cout
#include <thread>

void numbers() {
    for (int i = 1; i <= 10; i++) {
        std::cout << i << " ";
    }
}

void letters() {
    for (char c = 'A'; c <= 'J'; c++) {
        std::cout << c << " ";
    }
}

int main() {
    std::thread first (numbers);
    std::thread second (letters);
    std::cout << "Threads Running" << std::endl;
    first.join();
    second.join();
    std::cout << "Threads finished" << std::endl;
    return 0;
}
