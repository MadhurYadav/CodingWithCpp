/*

A wild pointer in C++ is a pointer that is uninitialized or has been deleted, but it is still being used or dereferenced in the program. Using or dereferencing a wild pointer leads to undefined behavior because it can point to any random memory location, and accessing that memory can result in unpredictable consequences, crashes, or data corruption.


*/

#include <iostream>
using namespace std;

int main() {
    int* wildPointer;  // uninitialized pointer

    // Attempting to dereference the wild pointer
    // This is undefined behavior because the pointer is not pointing to a valid memory location
    int value = *wildPointer;

    // Another example of a wild pointer:
    int* anotherWildPointer = new int;  // dynamically allocated memory

    delete anotherWildPointer;  // deallocate memory

    // Accessing the memory after deallocation is undefined behavior
    int value2 = *anotherWildPointer;

    return 0;
}
