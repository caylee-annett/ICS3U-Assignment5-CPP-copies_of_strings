// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program prints copies of a string

#include <iostream>
#include <string>

int main() {
    // This function prints the new string
    std::string enteredString;
    std::string numberAsString;
    int numberAsInteger;
    std::string newString;
    int loopCounter = 0;

    // Input
    std::cout << "This program prints copies of a string as many times as "
        "you want." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter a string: ";
    std::cin >> enteredString;
    std::cout << "Enter a positive integer for the number of times to "
        "repeat the string: ";
    std::cin >> numberAsString;

    // Process & Output
    while (true) {
        try {
            numberAsInteger = std::stoi(numberAsString);

            if (numberAsInteger > 0) {
                break;
            } else {
                std::cout << numberAsString << " is not a valid input. Enter "
                    "a positive integer: ";
                std::cin >> numberAsString;
            }
        } catch (std::invalid_argument) {
            std::cout << numberAsString << " is not a valid input. Enter a "
                "positive integer: ";
            std::cin >> numberAsString;
        }
    }
    for (loopCounter = 0; loopCounter < numberAsInteger; loopCounter++) {
        newString = newString + enteredString;
    }
    std::cout << "" << std::endl;
    std::cout << "The new string is: " << newString << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
