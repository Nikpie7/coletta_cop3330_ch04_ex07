/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nikolai Coletta
 */

#include "std_lib_facilities.h"

int main() {
    String input1, input2;
    double num1, num2, output;
    char operation;

    cout << "Please type two numbers and an operator, separated by a space:" << endl;
    cin >> input1;
    cin >> input2;
    cin >> operation;

    if (input1 == "zero" || input1 == "0")
        num1 = 0;
    else if (input1 == "one" || input1 == "1")
        num1 = 1;
    else if (input1 == "two" || input1 == "2")
        num1 = 2;
    else if (input1 == "three" || input1 == "3")
        num1 = 3;
    else if (input1 == "four" || input1 == "4")
        num1 = 4;
    else if (input1 == "five" || input1 == "5")
        num1 = 5;
    else if (input1 == "six" || input1 == "6")
        num1 = 6;
    else if (input1 == "seven" || input1 == "7")
        num1 = 7;
    else if (input1 == "eight" || input1 == "8")
        num1 = 8;
    else if (input1 == "nine" || input1 == "9")
        num1 = 9;
    else
    {
        cout << "Invalid input!";
        return 1;
    }

    if (input2 == "zero" || input2 == "0")
        num2 = 0;
    else if (input2 == "one" || input2 == "1")
        num2 = 1;
    else if (input2 == "two" || input2 == "2")
        num2 = 2;
    else if (input2 == "three" || input2 == "3")
        num2 = 3;
    else if (input2 == "four" || input2 == "4")
        num2 = 4;
    else if (input2 == "five" || input2 == "5")
        num2 = 5;
    else if (input2 == "six" || input2 == "6")
        num2 = 6;
    else if (input2 == "seven" || input2 == "7")
        num2 = 7;
    else if (input2 == "eight" || input2 == "8")
        num2 = 8;
    else if (input2 == "nine" || input2 == "9")
        num2 = 9;
    else
    {
        cout << "Invalid input!";
        return 1;
    }

    if (operation == '+')
        output = num1 + num2;
    else if (operation == '-')
        output = num1 - num2;
    else if (operation == '*')
        output = num1 * num2;
    else if (operation == '/')
        output = num1 / num2;
    else
    {
        cout << "Invalid input!";
        return 1;
    }

    cout << "The result of " << num1 << " " << operation << " " << num2 << " is: " << output;

    return 0;
}
