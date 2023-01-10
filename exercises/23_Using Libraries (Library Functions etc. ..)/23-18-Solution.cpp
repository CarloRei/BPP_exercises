#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int lower_bound, upper_bound;
    std::cin >> lower_bound >> upper_bound;
    auto lb = std::lower_bound(numbers.begin(), numbers.end(), lower_bound);
    auto ub = std::upper_bound(numbers.begin(), numbers.end(), upper_bound);
    std::cout << "The range of values between " << lower_bound << " and " << upper_bound << " is: ";
    for (auto it = lb; it != ub; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
