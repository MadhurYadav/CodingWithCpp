#include <iostream>
using namespace std;

// function with integer argument
void fun(int N){
    cout<<"fun(int)"<<endl;
    return;
}

// Overloaded function with char pointer argument
void fun(char* s){
    cout<<"fun(char *)"<<endl;
    return;
}
int main() {

    //  Case1: Understanding nullptr requirement
    // fun(NULL);// ERROR
    fun(nullptr);

    /*
    
    What is the problem with above program? 
    NULL is typically defined as (void *)0 and conversion of NULL to integral types is allowed. So the function call fun(NULL) becomes ambiguous. 


    How does nullptr solve the problem? 
    In the above program, if we replace NULL with nullptr, we get the output as “fun(char *)”.

    nullptr is a keyword that can be used at all places where NULL is expected. Like NULL, nullptr is implicitly convertible and comparable to any pointer type. Unlike NULL, it is not implicitly convertible or comparable to integral types.

    As a side note, nullptr is convertible to bool. 
    */ 

   // Case2: Comparing nullptr

    // creating two variables of nullptr_t type 
    // i.e., with value equal to nullptr
   nullptr_t np1, np2;

    // <= and >= comparison always return true
    if(np1 >= np2) cout<<"can compare"<<endl;
    else cout<<"can not compare"<<endl;

    // Initialize a pointer with value equal to np1
    char *x = np1; // same as x = nullptr (or x = NULL will also work) 

    if(x==nullptr) cout<<"x is null"<<endl;
    else cout<<"x is not null"<<endl;

    /*
    
    Comparison between two values of type nullptr_t is specified as, 
        - comparison by <= and >= return true
        - comparison by < and > returns false 
        - comparing any pointer type with nullptr by == and != returns true or false if it is null or non-null respectively. 
    
    */

    return 0;
}