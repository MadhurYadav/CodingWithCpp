/*

Dynamically allocated memory is allocated on Heap, and non-static and local variables get memory allocated on Stack

For dynamically allocated memory like “int *p = new int[10]”, it is the programmer’s responsibility to deallocate memory when no longer needed. If the programmer doesn’t deallocate memory, it causes a memory leak (memory is not deallocated until the program terminates). 

1. Dynamic Memory Allocation (new):

    The new operator is used to allocate memory for a variable or an array of variables on the heap during runtime.

    It returns a pointer to the allocated memory.

    Syntax for allocating a single variable: type* pointer_variable = new type;

    Syntax for allocating an array: type* array_pointer = new type[size];

2. Dynamic Memory Deallocation (delete):

    The delete operator is used to free the memory that was previously allocated using new.

    For a single variable: delete pointer_variable;

    For an array: delete[] array_pointer;


3. Memory Leak:

    It's essential to deallocate memory using delete after it is no longer needed. Failing to do so can lead to memory leaks, where memory is not released, and the program's memory usage increases over time.


4. Smart Pointers:
    C++11 introduced smart pointers (unique_ptr, shared_ptr, and weak_ptr) to help manage dynamic memory more safely. Smart pointers automatically handle memory deallocation when the object is no longer in use, reducing the risk of memory leaks.

*/

#include <iostream>
using namespace std;
int main() {

    // Dynamic memory allocation for a single variable
    int* dynamicInt = new int; // Allocate memory for an integer

    // Check if memory allocation was successful
    if(dynamicInt == nullptr){
        cout<<"Memory allocation failed!"<<endl;
        return 1; // Return an error code
    }

    // Assign a value to the dynamically allocated integer
    *dynamicInt = 42;
    cout<<*dynamicInt<<endl;

    // Dynamic memory allocation for an array
    int size = 5;
    float* dynamicArray = new float[size]; // Allocate memory for an array of floats

    if(dynamicArray == nullptr){
        cout<<"Memory allocation failed!"<<endl;

        // Deallocate previously allocated memory to avoid memory leaks
        delete dynamicInt;

        return 1; // Return an error code
    }

    // Assign values to the dynamically allocated array
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = 1.1f * i;
    }

    // Print the dynamically allocated array
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout<<endl;

    // Deallocate dynamically allocated memory
    delete dynamicInt;    // Deallocate single variable
    delete[] dynamicArray; // Deallocate array


    return 0;
}