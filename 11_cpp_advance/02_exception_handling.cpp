/*

Exception handling in C++ is a mechanism that allows you to deal with errors or exceptional situations in a more controlled and structured way. It provides a way to separate the error-handling code from the normal code, improving code readability and maintainability. C++ uses three keywords for exception handling: try, catch, and throw.


1. Try Block:
    The try block encloses a section of code where an exception might occur.

    If an exception occurs within the try block, the program searches for a matching catch block.

2. Throw Statement:
    The throw statement is used to raise an exception explicitly.

    You can throw various types, including built-in types, objects, or even strings.

3. Catch Blocks:
    The catch block is used to handle specific types of exceptions that might be thrown within the corresponding try block.

    You can have multiple catch blocks to handle different types of exceptions.



*/

#include <iostream>
using namespace std;

int main() {
    int numerator, denominator, result;

    cout << "Enter numerator and denominator: ";
    cin >> numerator >> denominator;

    try {
        if (denominator == 0) {
            throw denominator; // Throw the denominator as an exception
        }

        result = numerator / denominator;
    } catch (int e) {
        cout << "Exception: Divide by zero not allowed. Denominator: " << e << endl;
        return 1; // Terminate the program with an error code
    }

    cout << "Result: " << result << endl;
    return 0;
}
