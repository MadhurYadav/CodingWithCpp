#include <iostream>
using namespace std;

// global variable 
int global = 5; 
  
// global variable accessed from 
// within a function

int global2 = 20; // global var

void func() 
{    
    // this variable is local to the 
    // function func() and cannot be  
    // accessed outside this function 
    int age=18;     
} 

int main() {
    // cout<<age<<endl; // 'age' was not declared in this scope

    cout<<global<<endl;

    // changing gloabal var
    global = 10;
    cout<<global<<endl;

    // checking if gloabal and local var has same name

    int global2 = 21; // local var
    cout<<global2<<endl;

    // Whenever there is a local variable defined with same name as that of a global variable then the compiler will give precedence to the local variable

    // ----------------------
    // How to access a global variable when there is a local variable with same name?

    // scope resolution (::)

    cout<<::global2<<endl;

    return 0;
}