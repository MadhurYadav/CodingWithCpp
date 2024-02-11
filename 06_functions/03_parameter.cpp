/*
The parameters passed to the function are called actual parameters whereas the parameters received by the function are called formal parameters.
*/

// call by value

// call by reference

#include <iostream>
using namespace std;

void callByValue(int n1, int n2){
    // swap values

    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

    // cout<<"Inside Call by value function "<<n1<<" "<<n2<<endl;
}

// * is used to de-refrence
void callByRefrence(int* n1, int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    cout<<"Inside Call by refrence function "<<*n1<<" "<<*n2<<endl;
}

int main() {
    int num1 = 10, num2 = 20;
    // Original value will not change
    callByValue(num1, num2);

    // cout<<"In Caller by value function "<<num1<<" "<<num2<<endl;

    // Original value will change
    callByRefrence(&num1, &num2);

    cout<<"In Caller by refrence value function "<<num1<<" "<<num2<<endl;

    return 0;
}