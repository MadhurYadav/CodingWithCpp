#include <bits/stdc++.h> 
using namespace std;

// Pass-by-Value 
int square1(int num){
    // Address of num in square1() is not the same as num1 in main()
    cout<<"address of num1 in square1(): "<<&num<<endl;

    // clone modified inside the function 
    num *= num;

    return num;
}

void square2(int* num){
    // Address of num in square2() is the same as num2 in main()
    cout<<"address of num2 in square2(): "<<num<<endl;

    // Explicit de-referencing to get the value pointed-to 
    // *num = *num * *num;
    //or
    *num *= *num; 
    cout<<"Square of num: "<<*num<<endl;

}

void square3(int& num){
    // Address of num in square3() is the same as num3 in main()
    cout<<"address of num3 in square3(): "<<&num<<endl;

    // Implicit de-referencing (without '*')
    num = num * num;
    cout<<"Square of num: "<<num<<endl;
}

void func(){

    // Call-by-Value
    int num1 = 8;
    cout<<"address of num1 in main(): "<<&num1<<endl;
    cout<<"Square of num1: "<<square1(num1)<<endl; 
    cout<<"No change in num1: "<<num1<<endl;\


    // Call-by-Reference with Pointer Arguments 
    int num2 = 8;
    cout<<"address of num2 in main(): "<<&num2<<endl;
    square2(&num2);
    cout<<"Change reflected in n2: "<<num2<<endl;


    // Call-by-Reference with Reference Arguments
    int num3 = 8;
    cout<<"address of n3 in main(): "<<&num3<<endl;
    square3(num3);
    cout<<"Square of num3: "<<num3<<endl;

    
}

int main() {
    func();
    return 0;
}