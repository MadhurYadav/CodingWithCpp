// Case 1 - Methods not return value
// void fun()

// Case 2 - Methods return value

#include <iostream>
using namespace std;

// Case1:

// we can give void parameter or left empty it's same
void func1(void){
    // cout<<"Hello World!";
}

void func2(){
    // cout<<"The End!";
    return;
    // cout<<"After Return"; // this will never print
}

void func3(){
    // cout<<"Adding return value";

    // return 10; // warning: 'return' with a value, in function returning void
}

// Case2:

int func4(int num1, int num2){
    int sum = num1 + num2;

    return sum;
}

int main() {
    func1();
    func2();
    func3();

    int number1 = 2, number2 = 3;
    cout<<func4(number1, number2);
    
    return 0;
}