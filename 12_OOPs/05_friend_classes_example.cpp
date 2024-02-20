// Friend Classes & Member Friend Functions

#include <iostream>
using namespace std;

// Forward Delaration 
// We've to tell compiler that tere is Complex class ahead so tha it'll not give any compile error

class Complex;

// Compiler doesn't know a & b
class Calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }

        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);
};

class Complex{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator::sumRealComplex(Complex, Complex);
    // friend int Calculator::sumCompComplex(Complex, Complex);

    // Alter: Declaring the entire calculator class as frined
    friend class Calculator;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
            return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1, Complex o2){
            return (o1.b + o2.b);
}



int main() {
    Complex o1, o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);

    Calculator calc;
    int result1 = calc.sumRealComplex(o1, o2);
    int result2 = calc.sumCompComplex(o1, o2);

    cout<<"Real Part Sum "<<result1<<endl;
    cout<<"Complex Part Sum "<<result2<<"i"<<endl;

    return 0;
}