/*

Dynamic arrays in C++ are arrays whose size can be determined at runtime rather than compile time. Unlike static arrays, where the size is fixed at compile time, dynamic arrays use pointers and memory allocation to allow flexibility in size. The dynamic array is created on the heap, and its size can be adjusted during program execution.

*/

#include <iostream>
using namespace std;
int main() {

    // Case1: Dynamic Array Declaration
    int* dynamicArray; // Declare a pointer for the dynamic array


    // Case2: Dynamic Memory Allocation
    int size = 10;
    dynamicArray = new int[size]; // Allocate memory for an array of size 10


    // Case3: Accessing and Modifying Elements
    dynamicArray[0] = 42; // Set the first element to 42
    int value = dynamicArray[1]; // Access the second element

    
    for(int i=0; i<size; i++){
        dynamicArray[i] = i*2;
    }

    for(int i=0; i<size; i++){
        cout<<dynamicArray[i]<<" ";
    }

    cout<<endl;

    
    // Case4: Resize Dynamic Array
    int newSize = 15;
    int* resizedArray = new int[newSize];

    // Copy elements from the old array to the new array

    for(int i=0; i<min(size,newSize); i++){
        resizedArray[i] = dynamicArray[i];
    }

    // Case:5 Dynamic Array Deallocation

    // release old array
    delete[] dynamicArray; // Free the memory allocated for the dynamic array

    // Update the pointer to the new array

    dynamicArray = resizedArray;
    size = newSize;

    



    return 0;
}