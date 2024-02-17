/*

typedef gives freedom to the user by allowing them to create their own types

SYNTAX - typedef existing_data_type new_data_type

*/

#include <iostream>
#include <vector>

using namespace std;

typedef int INTEGER;

// Normal pointer to a function 
int (*func_ptr1)(int, int);

// Using typedef with pointer to a function 
typedef int (*func_ptr2)(int, int);

// Function to multiply two numbers 
int product(int u, int v) {
    return u*v;
}

int main() {
    INTEGER var = 100;
    cout<<var<<endl;

    // Case1: Vector

    typedef vector<int> vec;

    // vec is new data type (vecotr<int>)
    vec v;

    v.push_back(190);
    v.push_back(180); 
    v.push_back(10); 
    v.push_back(10); 
    v.push_back(27); 

    for(auto X: v){
        cout<<X<<" ";
    }
    cout<<endl;


    // Case2: Predefined Data Types

    typedef unsigned long long int ulli;

    ulli a{1232133};
    cout<<a<<endl;


    // Case3: Arrays
    typedef int arr[3];

    arr array1{1,1,1};

    for(int i=0; i<3; i++){
        cout<<array1[i]<<" ";
    }
    cout<<endl;


    // Case3: Pointers

    int x = 10, y = 20;

    typedef int* iPtr;

    iPtr pointer_to_x = &x;
    iPtr pointer_to_y = &y;

    cout<<x<<" "<<y<<endl;


    // Case4: Function Pointer

    func_ptr1 = &product; 
  
    // Using typedefed function pointer for creating new 
    // function pointer "new_func" 
    func_ptr2 new_func_ptr = &product; 
  
    // Using normal pointer to a function 
    int x2 = (*func_ptr1)(3, 2); 
  
    // Using the new function pointer 
    int x1 = (*new_func_ptr)(2, 4); 

    cout<<x1<<endl;
    cout<<x2<<endl;

    return 0;
}