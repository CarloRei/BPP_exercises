#include <random>
#include <atomic>
#include <iostream>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    int target = dist(gen);
    std::atomic<int> num_guesses(0);
    int guess;
    while (true) {
        std::cin >> guess;
        num_guesses++;
        if (guess == target) {
            break;
        }
    }
    std::cout << "You took " << num_guesses << " guesses." << std::endl;
    return 0;
}
