/*

In C++, an inline function is a function that is expanded in place (i.e., replaced) at the point where it is called, rather than being executed through a regular function call mechanism. The inline keyword is used to indicate to the compiler that a particular function should be treated as inline.

*/

#include <iostream>
using namespace std;

// Declaration of an inline function
inline int add(int a, int b) {
    return a + b;
}

// not recommended
inline int incrementAndReturn(){
    // as static retain value
    static int count = 0;
    return ++count;
}

// Function with a constant argument
void printValue(const int x) {
    // Attempting to modify x would result in a compilation error
    // x = 10; // Error: assignment of read-only parameter 'const int x'
    
    cout << "Value: " << x << endl;
}

int main() {
    int result = add(3, 4); // The inline function call is expanded here
    cout << "Result: " << result << endl;

    cout<< "Count: "<<incrementAndReturn()<<endl; //1
    cout<< "Count: "<<incrementAndReturn()<<endl; //2

    int num = 5;
    printValue(num);

    return 0;
}