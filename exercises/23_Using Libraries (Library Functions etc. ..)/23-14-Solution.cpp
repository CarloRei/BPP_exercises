#include <algorithm>
#include <vector>
#include <fstream>

int main() {
    std::vector<int> numbers;
    std::ifstream input_file("numbers.txt");
    int x;
    while (input_file >> x) {
        numbers.push_back(x);
    }
    std::sort(numbers.begin(), numbers.end());
    // numbers is now sorted in ascending order
    return 0;
}
