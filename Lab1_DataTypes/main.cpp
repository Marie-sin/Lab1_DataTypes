#include "type_info.h"
#include "binary_output.h"
#include "bit_operations.h"
#include "individual_task.h"
#include <iostream>

int main() {

    std::cout << "  ==SIZES OF DATA TYPES==\n\n"; // 2-й этап
    printTypeSizes(); 

    std::cout << "  ==BINARY UNSIGNED IN:==\n\n"; // 3-й этап
    printBinaryUnsigned(); 

    std::cout << "  ==BINARY INT==\n\n";
    printBinaryInt();

    std::cout << "  ==BINARY FLOAT==\n\n"; // 4-й этап
    printBinaryFloat(3.14f); 
    printBinaryFloat(-2.5f);
    printBinaryFloat(0.0f);
    printBinaryFloat(std::numeric_limits<float>::denorm_min());
    printBinaryFloat(std::numeric_limits<float>::infinity());

    std::cout << "  ==BINARY DOUBLE==\n\n";
    printBinaryDouble(3.14);
    printBinaryDouble(-2.5);
    printBinaryDouble(0.0);
    printBinaryDouble(std::numeric_limits<double>::denorm_min());
    printBinaryDouble(std::numeric_limits<double>::infinity());

    std::cout << "  ==MANIPULATION WITH BITS==\n\n"; // 5-й этап
    demonstrationBitManipulation();

    std::cout << "  ==INDIVIDUAL TASK: MULTIPLICATION BY 2==\n\n"; // 6-й этап
    demonstrationMultipBy2();

    return 0;
}
