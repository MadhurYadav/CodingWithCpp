/*

In C++, a null pointer is a pointer that does not point to any memory location. It is a special value (usually represented by the constant nullptr in modern C++) that is used to indicate that the pointer is not currently pointing to a valid object or memory address.


    Uninitialized Pointers: 
        If you declare a pointer without initializing it, its value is indeterminate, and it may point to any memory location. To avoid this, it's a good practice to initialize pointers to nullptr if they are not immediately assigned a valid memory address.
    
    Pointer Arithmetic: 
        Performing pointer arithmetic on a null pointer or attempting to dereference a null pointer leads to undefined behavior. It is crucial to ensure that a pointer points to a valid memory location before using it.

    Return Values: 
        Functions or operations may return a null pointer to indicate an error or an absence of a valid value.
    

    NULL vs Uninitialized pointer – An uninitialized pointer stores an undefined value. A null pointer stores a defined value, but one that is defined by the environment to not be a valid address for any member or object.

    Note NULL vs Uninitialized pointer – An uninitialized pointer stores an undefined value. A null pointer stores a defined value, but one that is defined by the environment to not be a valid address for any member or object.

    NULL vs Void Pointer – Null pointer is a value, while void pointer is a type
*/

#include <iostream>
using namespace std;

bool value_found = false;  // Assume value is not found initially
int found_value = 42;      // Example value to be returned if found

int* myPointer = nullptr;
// Attempting to dereference a null pointer would result in undefined behavior
// int value = *myPointer; // This is not allowed and could lead to a crash or unpredictable behavior



int* findValue(int key) {
    // Logic to find value
    if (key == 42) {
        value_found = true;
        return &found_value;
    } else {
        value_found = false;
        return nullptr; // Indicating that the value was not found
    }
}

int main() {

    int* myPointer = nullptr; // Initializing to nullptr

    int key_to_find = 42;
    myPointer = findValue(key_to_find);

    if (myPointer != nullptr) {
        cout << "Value found: " << *myPointer << endl;
    } else {
        cout << "Value not found." << endl;
    }

    return 0;
}
