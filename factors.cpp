// Copyright (c) 2025 Angel rights reserved.
// Created by: Angel
// Created on: April 30,2025
// This program asks the user to input a
// number from a user without exceeding 1000 then
// find all the factors of that number using a for
// loop, a break statement, while loop and a do..while
// loop too.

#include <iostream>  // it includes the ouput and input

int main() {
    int userNum;  // declare a variable to store th user's input

    try {  // start a try block to avoid the program from crashing.
        while (true) {  // it is an infinite loop that will keep asking
            // the input until a valid answer
            std::cout << "Enter a positive number under 1000: ";  // asks
            // the suer for an input number
            std::cin >> userNum;  // reads the input from the userNum

            if (userNum <0 || userNum > 1000) {  // checks if the number is
                // less than 0 and is not greater than 1000
                std::cout << "This is number is not valid." << std::endl;
                // tells the user that it is not valid.

                if ((userNum == 0) && (userNum == decimal)) {  // checks if
                    // the number is not equal 0 and also is not a decimal
                    std::cout << "Number cannot be 0 and neither a decimal"
                    << std::endl;  // tells the user that the number can't be
                    // 0 and can't be a decimal either.
                }

            } else {  // if not
                break;  // it will break out of the loop
        }
    }
        // here we have a valid number
        std::cout << "\nFactors of " << userNum << " are: " << std::endl;
        // // tells the user that it is going to list the factors.

        for (int n = 1; n <= userNum; n++) {  // uses a for loop to find and
            // display all the factors of the number entered

            if (userNum % n == 0) {  // if n divided a userNumber and the
                // remainder is 0,then it is a factor
                std::cout << n << std::endl;  // prints out the factor
            }
        }
    }
    // catch any errors in the try block
    catch (const char* msg) {
        std::cout << "Wrong input." << std::endl;  // print out the
        // error message
    }

    return 0;  // returns 0 to show a successful program
}
