/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yohan Hmaiti
 */

// include the header file that contains all the imports needed
#include "std_lib_facilities.h"

// use the standard name space
using namespace std;

// main driver function
int main(void) {

    // create the appropriate string as required by the assignment to store the operands and operators accordingly
    string operation;

    // create two variables to store the operands that are set to double type as requested by the assignment
    // create a variable to hold the result
    double v1 = 0, v2 = 0; 
    double result = 0;

    // prompt the user for the operator and operand
    cout << "Enter one from the following: +, -, *, /, plus, minus, mul, div \nthen enter two values with a space in between: ";

    // get the input and store it accordingly to the appropriate variables
    cin >> operation >> v1 >> v2;
   
    // conditionals used to set the operations based on the operators and operands
    // handle addition
    if (operation == "+" || operation == "plus")

        result = v1 + v2;

    // handle subtraction
    else if (operation == "-" || operation == "minus")

        result = v1 - v2;
    
    // handle multiplication
    else if (operation == "*" || operation == "mul")

        result = v1 * v2;

    // handle division
    else if (operation == "/" || operation == "div")
    {
        // throw an error whenever the user tries to divide by 0
        if (v2 == 0)

            error("you cannot divide by 0, please try again.");

        result = v1 / v2;
    }

    // handle any non valid operation and show the user the invalid operator
    else

        error("The current operator is not included/invalid, please try again! The invalid operator is: ", operation);

    // print the result
    cout << v1 << " " << operation << " " << v2 << " = " << result << '\n';

    // end of the main program 
    return 0;
}