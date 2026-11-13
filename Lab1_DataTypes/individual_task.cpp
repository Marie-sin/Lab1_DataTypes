#include "individual_task.h"
#include <iostream>
#include <limits>

int multiplyBy2(int num) {
    if (num < 0 || num > std::numeric_limits<int>::max() / 2) {
        std::cout << "\nError: incorrect number for this operation.\n";
        return num;
    }
    return num << 1;
}

void demonstrationMultipBy2() {
    int num;
    std::cout << "\nEnter a non-negative integer: ";
    std::cin >> num;

    int result = multiplyBy2(num);

    std::cout << "Original number: " << num << "\n";
    std::cout << "Result after shifting: " << result << "\n";
}
