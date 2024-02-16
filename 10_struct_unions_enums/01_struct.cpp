// In C++, structures, unions, and enums are three different types used for organizing and managing data in a program.

// Structures (struct)

/*

A structure is a composite data type in C++ that allows you to group together variables of different data types under a single name.


Members of a structure can be of any data type, including primitive types, arrays, or even other structures.

Syntax:

struct 
{
   // Declaration of the struct
}

*/

#include <iostream>
using namespace std;

// Define structure
struct MyStruct{
    int member1;
    float member2;
    char member3;
};

struct VarDec{
    int x;
    int y = 12;
}var;


struct Array{
    int a,b;
}arr[10];



struct Pointer{
    int p, q;
};


int main() {

    // Case 1: Understanding Struct

    // Declaring a Structure
    // struct MyStruct example; 
    // or
    MyStruct example;

    example = {1, 92.1, 'L'};

    // example.member1 = 1;
    // example.member2 = 92.1;
    // example.member3 = 'L';

    cout<<example.member1<<" "<<example.member2<<" "<<example.member3<<endl;

    // Case2: struct using typedef
    /*
    
    typedef is a keyword that is used to assign a new name to any existing data-type.

    In C++, you can use typedef with structures to create a new type name for a structure. This can make your code more readable and concise.

    Using typedef allows you to create an instance of the struct without explicitly using the keyword struct.
    
    */
    
    typedef struct{
        int x;
        int y;
    } NewStruct;

    NewStruct val;
    val.x = 30;
    val.y = 40;

    cout<<val.x<<" "<<val.y<<" "<<endl;


    // Case3: Declare Structure with Variable

    var.x = 15;
    cout<<var.x<<endl;
    cout<<var.y<<endl;

    // Case4: Array of Structure
    arr[0].a = 10;
    arr[1].a = 15;
    arr[0].b = 20;

    cout <<arr[0].a<<" "<<arr[1].a<<" "<< arr[0].b<<endl;

    // Case4: Structure Pointer

    Pointer p1 = {1,2};
    
    // p2 is a pointer to structure p1
    struct Pointer* p2;
    p2 = &p1;

    // Accessing structure members using structure pointer

    cout<<p2->p<<" "<<p2->q<<endl;

    



    return 0;
}