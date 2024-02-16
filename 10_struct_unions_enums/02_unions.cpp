/*

A union is a type of structure that can be used where the amount of memory used is a key factor. 

A union is similar to a structure, but all its members share the same memory location. This means that a union can hold only one of its members at a time.

Unions are useful when you want to store different types of data in the same memory location, and you only need to access one type at a time.

This is most useful when the type of data being passed through functions is unknown, using a union which contains all possible data types can remedy this problem.

*/

#include <iostream>
using namespace std;

// Defining a Union
union MyUnion{
    int intVal;
    float floatVal;
    char charVal;
};

int main() {

    // Initializing Union
    union MyUnion example;

    example.intVal = 42;
    cout<<example.intVal<<endl;
    // Now floatValue and charValue share the same memory location

    example.floatVal = 34.43;
    cout<<example.floatVal<<endl;
    // cout<<example.intVal<<endl; // Now intVal is removed


    example.charVal = 'A';
    cout<<example.charVal<<endl;

    /*
    
    WORKING
    The first value at the allocated memory : 42
    The next value stored after removing the previous value : 34.43
    The Final value value at the same allocated memory space : A
    
    */

    return 0;
}