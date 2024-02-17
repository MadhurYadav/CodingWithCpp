
#include <iostream>
using namespace std;

// Case1: Defining the constructor within the class
class Student{
    int rno;
    char name[50];
    double fee;

    public:
    // Constuctor
    Student(){
        cout<<"Enter the RollNo:";
        cin>>rno;
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Fee:";    
        cin>>fee;
    }

    void display(){
        cout<<endl<<rno<<" "<<name<<" "<<fee<<endl; 
    }
};

// Case2: Defining the constructor outside the class
class Human{
    int birthYear;
    char name[50];
    double salary;

    public:
    Human();
    void print();
};

// Constructor outside the class
Human::Human(){
    cout<<"Enter the Birth Year:";
    cin>>birthYear;
    cout<<"Enter the Name:";
    cin>>name;
    cout<<"Enter the Salary:";    
    cin>>salary;
}
void Human::print(){
    cout<<endl<<birthYear<<" "<<name<<" "<<salary<<endl;
}

int main() {

    // Case1: Defining the constructor within the class
    Student s;//constructor gets called automatically when we create the object of the class

    s.display();

    // Case2: Defining the constructor outside the class
    Human hu;
    hu.print();

    return 0;
}