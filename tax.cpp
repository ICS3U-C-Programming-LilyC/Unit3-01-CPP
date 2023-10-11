// Copyright (c) 2021 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Oct/11/2023
// This program asks the user for a subtotal
// of their purchase. It will then
// calculates and display the tax
// and the total cost.
#include <iomanip>
#include <iostream>

int main() {
    // Declaring my constants.
    const float HST = 0.11;

    // Declaring my variables.
    float tax;
    float total;
    float subtotal;

    // Getting the user input for subtotal.
    std::cout << "Enter a subtotal: $ ";
    std::cin >> subtotal;

    // Calculate the tax.
    tax = subtotal * HST;

    // Calculate the total.
    total = subtotal + tax;

    // Displaying the tax back to the user.
    std::cout << "The tax would be = $" <<
    std::fixed << std::setprecision(2) <<
    std::setfill('0') << tax << "\n";

    // Displaying the total back to the user.
    std::cout << "The total cost is = $" <<
    std::fixed << std::setprecision(2) <<
    std::setfill('0') << total << "\n";
}
