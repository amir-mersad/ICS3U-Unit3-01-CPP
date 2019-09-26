// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program calculates the addition of 2 numbers

#include <iostream>

int main() {
    // This function calculates the addition of 2 numbers
    int number1;
    int number2;
    int total;

    // Input
    std::cout << "Please enter the first number(integer): " << std::endl;
    std::cin >> number1;
    std::cout << "Please enter the second number(integer): " << std::endl;
    std::cin >> number2;

    // Process
    total = number1 + number2;

    // Output
    std::cout << "The calculated number is: " << total << std::endl;
}
