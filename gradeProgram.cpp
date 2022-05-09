// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program compare levels
// and return the middle percentage.

#include <iostream>

// Defining the function that returns the percentage
std::string CalcMark(std::string level) {
       if (level == "4+") {
              return "97.5%.";
       } else if (level == "4") {
              return "90.5%.";
       } else if (level == "4-") {
              return "83%.";
       } else if (level == "3+") {
              return "78%.";
       } else if (level == "3") {
              return "74%.";
       } else if (level == "3-") {
              return "71%.";
       } else if (level == "2+") {
              return "68%.";
       } else if (level == "2") {
              return "64.5%.";
       } else if (level == "2-") {
              return "61%.";
       } else if (level == "1+") {
              return "58%.";
       } else if (level == "1") {
              return "54.5%.";
       } else if (level == "1-") {
              return "51%.";
       } else if (level == "R") {
              return "below 50.";
       } else {
              return "-1";
       }
}

int main() {
       // Declaring variables
       std::string userInput, percentage;

       // input
       std::cout << "Enter a level: ";
       std::cin >> userInput;

       // Storing the return value of the function in the percentage variable
       percentage = CalcMark(userInput);

       // Displaying the result
       std::cout << "The level " << userInput << " has a middle percentage of ";
       std::cout << percentage << "\n";
}
