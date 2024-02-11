// Void Pointer which has no associated data type with it.

// It can point to any data of any datatype and can be typecasted to any type.

#include <iostream>
using namespace std;
int main() {
    int n = 10;
    void *ptr = &n;

    cout<< *(int*)ptr<<endl; // typecasting and dereferencing

    // Attempting to dereference without typecasting will result in an error
    // cout << *ptr << endl; // ERROR

    // Note: Void pointers cannot be dereferenced. It can however be done using typecasting the void pointer. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size.

    return 0;
}

// Use of Void Pointer

// malloc and calloc function returns a void pointer. Due to this reason, they can allocate a memory for any type of data

// Syntax - void* malloc(size_t size);