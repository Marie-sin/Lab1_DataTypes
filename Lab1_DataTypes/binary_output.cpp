#include "binary_output.h"
#include <iostream>
#include <iomanip>
#include <bitset>
#include <cstring>
#include <cstdint>

void printBinaryUnsigned() {
    std::cout << "Enter an unsigned int number:\n";
    unsigned int num;
    std::cin >> num;

    std::bitset<32> bits(num);

    std::cout << std::setw(15) << std::left << "\nNumber: " << num << "\n";
    std::cout << std::setw(15) << "Sign bit: " << "absent (unsigned type)\n";
    std::cout << std::setw(15) << "Bits: ";

    for (int i = 31; i >= 0; --i) {
        std::cout << bits[i];

        if (i % 8 == 0 && i != 0) {
            std::cout << " ";
        }
    }
    std::cout << "\n\n";
}

void printBinaryInt() {
    std::cout << "Enter an int number:\n";
    int num;
    std::cin >> num;

    std::bitset<32> bits(num);

    std::cout << std::setw(15) << "\nNumber: " << num << '\n';
    std::cout << std::setw(15) << "Binary number: ";

    std::cout << bits[31] << " ";

    for (int i = 30; i >= 0; --i) {
        std::cout << bits[i];
        if (i % 8 == 0 && i != 0) {
            std::cout << " ";
        }
    }

    std::cout << "\nThe first bit is the sign bit.\n\n";
}

void printBinaryFloat(float num) {
    std::uint32_t bits = 0;

    if (sizeof(num) != sizeof(bits)) {
        std::cout << "Error: This program requires 32-bit float.\n";
        return;
    }

    std::memcpy(&bits, &num, sizeof(num));
    std::bitset<32> binary(bits);
    std::cout << std::setw(11) << std::left << "\nNumber: " << num << '\n';
    std::cout << "Sign bit: " << binary[31] << '\n';
    std::cout << "Exponent: ";

    for (int i = 30; i >= 23; --i) {
        std::cout << binary[i];
    }

    std::cout << "\nMantissa: ";
    for (int i = 22; i >= 0; --i) {
        std::cout << binary[i];

        if (i % 8 == 0 && i != 0) {
            std::cout << " ";
        }
    }
    std::cout << "\n\n";

}

void printBinaryDouble(double num) {
    std::uint64_t bits = 0;

    if (sizeof(num) != sizeof(bits)) {
        std::cout << "Error: This program requires 64-bit double.\n";
        return;
    }
    std::memcpy(&bits, &num, sizeof(num));
    std::bitset<64> binary(bits);
    std::cout << std::setw(11) << std::left << "\nNumber: " << num << '\n';
    std::cout << "Sign bit: " << binary[63] << '\n';
    std::cout << "Exponent: ";

    for (int i = 62; i >= 52; --i) {
        std::cout << binary[i];
    }

    std::cout << "\nMantissa: ";
    for (int i = 51; i >= 0; --i) {
        std::cout << binary[i];

        if (i % 8 == 0 && i != 0) {
            std::cout << " ";
        }
    }
    std::cout << "\n\n";
}
