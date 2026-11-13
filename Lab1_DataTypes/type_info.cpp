#include "type_info.h"
#include <iostream>
#include <iomanip>

void printTypeSizes() {
    std::cout << std::setw(21) << std::left << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << std::setw(21) << "Size of bool: " << sizeof(bool) << " bytes\n";
    std::cout << std::setw(21) << "Size of char: " << sizeof(char) << " bytes\n";
    std::cout << std::setw(21) << "Size of short int: " << sizeof(short int) << " bytes\n";
    std::cout << std::setw(21) << "Size of long int: " << sizeof(long int) << " bytes\n";
    std::cout << std::setw(21) << "Size of float: " << sizeof(float) << " bytes\n";
    std::cout << std::setw(21) << "Size of double: " << sizeof(double) << " bytes\n";
    std::cout << std::setw(21) << "Size of long double: " << sizeof(long double) << " bytes\n\n";
}