// A pointer is a data type which holds the address of other data type. The “&” operator is called “address off" operator, and the "*” operator is called “value at” dereference operator. An example pro

#include <iostream>
using namespace std;

void pointerOne(){
    int a = 3;
    cout << &a << endl; // Address of variable 'a'

    int* b;
    cout << b << endl; // Uninitialized pointer, output is undefined

    b = &a;
    cout << b << endl; // Address of variable 'a' assigned to pointer 'b'

    cout << *b << endl; // Value at variable 'b' (the value of 'a')

    int **c = &b;
    cout << &b << endl; // Address of pointer 'b'
    cout << c << endl;  // Address of pointer 'b' assigned to pointer 'c'
    cout << *c << endl; // Value at pointer 'c' (address of 'a')
    cout << **c << endl; // Value at address 'c' -> value at address 'b' -> value at 'a'
}

void pointerTwo(){
    int var = 10;
    cout << var << endl; // Output: 10

    int* ptr = &var;
    cout << &var << endl; // Address of variable 'var'
    cout << ptr << endl;  // Address stored in pointer 'ptr' (address of 'var')
    cout << *ptr << endl; // Value at the memory address stored in 'ptr' (value of 'var')

    *ptr = 20;
    cout << *ptr << endl; // Value at the memory address stored in 'ptr' after modification (now 20)
    cout << var << endl;  // Value of variable 'var' after modification (now 20)

    int** ptrs = &ptr;
    cout << &ptr << endl; // Address of pointer 'ptr'
    cout << ptrs << endl; // Address stored in pointer 'ptrs' (address of 'ptr')
    cout << *ptrs << endl; // Value at the memory address stored in 'ptrs' (address of 'var')

    // Note: The following lines modify the value of 'var' indirectly through the double pointer 'ptrs'
    **ptrs = 30;
    cout<<var<<endl; // Value of variable 'var' after modification (now 30)
    cout << *ptrs << endl; // Value at the memory address stored in 'ptrs' after modification (now 30)
    cout << **ptrs << endl; // Value at the memory address stored in 'ptrs' after double dereferencing (now 30)
}

int main() {
    
    // pointerOne();
    pointerTwo();
    return 0;
}

