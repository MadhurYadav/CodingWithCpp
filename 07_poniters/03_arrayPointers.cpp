// An array name contains the address of the first element of the array which acts like a constant pointer. It means, the address stored in the array name can’t be changed. For example, if we have an array named val then val and &val[0] can be used interchangeably. 

#include <iostream>
using namespace std;

void func(){
    // Declare an array 
    int val[3] = {5, 10, 20};
    cout<<val[0]<<endl;

    // val or &val or &val[0] is same
    cout<<val<<endl;
    cout<<&val<<endl;
    cout<<&val[0]<<endl;

    cout<<&val[1]<<endl;
    cout<<&val[2]<<endl;

    int* ptr = val;

    // ptr or &val
    cout<<ptr<<endl;
    cout<<ptr[0]<<endl;
    cout<<ptr[1]<<endl;
    cout<<ptr[2]<<endl;
    
    
}

int main() {
    func();
    return 0;
}


/*

Can Size of Pointer Increase?

The size of a pointer in C++ is generally fixed and depends on the architecture of the system. On most modern systems, the size of a pointer is determined by the bitness of the system. In a 32-bit system, a pointer typically occupies 4 bytes, and in a 64-bit system, a pointer typically occupies 8 bytes.

This size is related to the size of the memory addresses that the pointer represents. In a 32-bit system, memory addresses are 32 bits (4 bytes), while in a 64-bit system, memory addresses are 64 bits (8 bytes).

It's important to note that the size of the data that a pointer points to is not part of the size of the pointer itself. For example, a pointer to an integer and a pointer to a double might have the same size, even though the size of the integer and double may be different.


*/