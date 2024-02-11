/*

Dangling Pointer

    When a pointer points to some non-existing memory location.

*/

#include <iostream>
#include <memory>

using namespace std;

int* func1() {
    // x now has scope throughout the program
    static int x = 5;
 
    return &x; // Returning address of a static variable (no dangling pointer)
}

int* func() {
    int x = 5;
    return &x; // Returning address of a local variable (dangling pointer)
}

int main() {
    // Case1: De-allocation of Memory

    int* ptr = new int; // Allocate memory using new

    // After below delete call, ptr becomes a dangling pointer

    delete ptr; // Memory is freed, but ptr is still pointing (dangling pointer)

    // Solution:
    // Removing Dangling Pointer
    ptr = nullptr; // or NULL (though nullptr is preferred in modern C++)

    // Alternatively, use std::unique_ptr for automatic memory management
    unique_ptr<int> smartPtr = make_unique<int>();

    // No need to explicitly free memory, smartPtr will handle it automatically

    // Case2: Function Call
    int* p = func();

    // p points to something which is not valid anymore
    // Avoiding access to the dangling pointer is important to prevent undefined behavior

    // Uncommenting the line below would result in undefined behavior
    // cout << *p << endl; // Accessing memory through a dangling pointer

    // Case3: Variable Goes Out of Scope
    int* q = func1();

    // Not a dangling pointer as it points to a static variable.
    cout << *q << endl;

    return 0;
}


