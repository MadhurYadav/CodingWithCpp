/*
#CLASS!

    C++ class is like a blueprint for an object. For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, Car is the class, and wheels, speed limits, and mileage are their properties.

    A Class is a user-defined data type that has data members and member functions.

        Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behavior of the objects in a Class.

        In the above example of class Car, the data member will be speed limit, mileage, etc, and member functions can be applying brakes, increasing speed, etc.


#OBJECT!
    An object is an instance of a class. It is created based on the class blueprint and represents a real-world entity.





*/

#include <iostream>
using namespace std;

// Class 
class Car{
    public:    
    // Properties (data members)
    string brand;
    int year;

    // Behaviors (member functions)
    void startEngine(){
        cout<<brand<<" Engine is Started!"<<endl;
    }

    void manufacturingDate();

};

// Definition of manufacturingDate using scope resolution operator :: 
void Car::manufacturingDate(){
    cout<<year<<endl;
}

int main() {
    
    // Creating an object of the Car class
    Car myCar;

    myCar.brand = "Toyota";
    myCar.year = 2022;
    myCar.startEngine(); // Invoking a method on the object

    myCar.manufacturingDate();

    return 0;
}