#pragma once

#include <cstdint>

std::uint32_t modifyBit(std::uint32_t value, unsigned int bitNum, char operation);
std::uint64_t modifyBit(std::uint64_t value, unsigned int bitNum, char operation);

void demonstrate32(std::uint32_t bits);
void demonstrate64(std::uint64_t bits);

void demonstrationBitManipulation();