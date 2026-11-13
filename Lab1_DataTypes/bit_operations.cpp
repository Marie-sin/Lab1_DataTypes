#include "bit_operations.h"
#include <iostream>
#include <bitset>
#include <cstring>

std::uint32_t modifyBit(std::uint32_t value, unsigned int bitNum, char operation) {
    if (bitNum >= 32) {
        std::cout << "Error: invalid bit number.\n";
        return value;
    }

    std::uint32_t mask = std::uint32_t{ 1 } << bitNum;

    if (operation == '1') {
        value |= mask;
    }
    else if (operation == '2') {
        value &= ~mask;
    }
    else if (operation == '3') {
        value ^= mask;
    }
    else {
        std::cout << "Error: unknown operation.\n";
    }
    return value;
}

std::uint64_t modifyBit(std::uint64_t value, unsigned int bitNum, char operation) {
    if (bitNum >= 64) {
        std::cout << "Error: invalid bit number.\n";
        return value;
    }

    std::uint64_t mask = std::uint64_t{ 1 } << bitNum;

    if (operation == '1') {
        value |= mask;
    }
    else if (operation == '2') {
        value &= ~mask;
    }
    else if (operation == '3') {
        value ^= mask;
    }
    else {
        std::cout << "Error: unknown operation.\n";
    }
    return value;
}

void demonstrate32(std::uint32_t bits) {
    std::bitset<32> binary(bits);
    std::cout << "\nOriginal Binary number: ";
    for (int i = 31; i >= 0; --i) {
        std::cout << binary[i];
        if (i % 8 == 0 && i != 0) {
            std::cout << " ";
        }
    }

    unsigned int bitNum;
    char operation;

    std::cout << "\n\nEnter bit number (0-31): ";
    std::cin >> bitNum;

    std::cout << "Enter operation (1 - set, 2 - reset, 3 - invert): ";
    std::cin >> operation;

    bits = modifyBit(bits, bitNum, operation);
    binary = std::bitset<32>(bits);
    std::cout << "\n\nResult: ";
    for (int i = 31; i >= 0; --i) {
        std::cout << binary[i];
        if (i % 8 == 0 && i != 0) {
            std::cout << " ";
        }
    }
    std::cout << "\n\n";
}

void demonstrate64(std::uint64_t bits) {
    std::bitset<64> binary(bits);
    std::cout << "\nOriginal Binary number: ";
    for (int i = 63; i >= 0; --i) {
        std::cout << binary[i];
        if (i % 8 == 0 && i != 0) {
            std::cout << " ";
        }
    }

    unsigned int bitNum;
    char operation;

    std::cout << "\n\nEnter bit number (0-63): ";
    std::cin >> bitNum;

    std::cout << "Enter operation (1 - set, 2 - reset, 3 - invert): ";
    std::cin >> operation;

    bits = modifyBit(bits, bitNum, operation);
    binary = std::bitset<64>(bits);
    std::cout << "\n\nResult: ";
    for (int i = 63; i >= 0; --i) {
        std::cout << binary[i];
        if (i % 8 == 0 && i != 0) {
            std::cout << " ";
        }
    }
    std::cout << "\n\n";
}

void demonstrationBitManipulation() {
    int type;

    std::cout << "Enter data type (1 - int, 2 - float, 3 - double): ";
    std::cin >> type;

    if (type == 1) {
        int num;

        std::cout << "Enter an int number: ";
        std::cin >> num;

        std::uint32_t bits = 0;

        if (sizeof(num) != sizeof(bits)) {
            std::cout << "\nError: This program requires 32-bit int.\n";
            return;
        }

        std::memcpy(&bits, &num, sizeof(num));
        demonstrate32(bits);
    }
    else if (type == 2) {
        float num;

        std::cout << "Enter a float number: ";
        std::cin >> num;

        std::uint32_t bits = 0;

        if (sizeof(num) != sizeof(bits)) {
            std::cout << "\nError: This program requires 32-bit float.\n";
            return;
        }

        std::memcpy(&bits, &num, sizeof(num));
        demonstrate32(bits);
    }
    else if (type == 3) {
        double num;

        std::cout << "Enter a double number: ";
        std::cin >> num;

        std::uint64_t bits = 0;

        if (sizeof(num) != sizeof(bits)) {
            std::cout << "\nError: This program requires 64-bit double.\n";
            return;
        }

        std::memcpy(&bits, &num, sizeof(num));
        demonstrate64(bits);
    }
    else {
        std::cout << "\nError: incorrect type selection.\n";
    }
}