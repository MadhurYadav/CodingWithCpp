/*
1. Default Constructor or Zero Argument Constructor
    A constructor without any arguments or with the default value for every argument is said to be the Default constructor. 

2. Parameterized Constructor
    Parameterized constructors are those constructors that take one or more parameters. 


*/

#include <iostream>
using namespace std;

class Complex{
    int a, b; // private data members
    public:
        Complex(int, int); // Constructor declaration
        void printNumber(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};

// This is a parameterized constructor as it takes 2 parameters
Complex::Complex(int x, int y){
    a = x;
    b = y;
}


class Point{
    int p1, p2;
    public:
        Point(int a, int b){
            p1 = a;
            p2 = b;
        }

        void displayPoint(){
            cout<<"The Point is "<<p1<<" "<<p2<<endl;
        }
};
int main() {
    // Implicit call
    Complex a(4,6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5,7);
    b.printNumber();


    //

    Point p(1,1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    return 0;
}