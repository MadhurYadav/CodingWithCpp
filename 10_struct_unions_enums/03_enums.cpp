/*

An enumeration (enum) is a user-defined data type used to assign names to integral constants, making the code more readable and maintainable.

Enums are often used when there is a need to represent a set of named integer values.

Enums are particularly useful when you want to represent a set of related constant values, such as days of the week or menu options.

*/

#include <iostream>
using namespace std;

// Defining  an enum
enum Days{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

// Monday is assigned the value 0, Tuesday is assigned 1, and so on.

int main() {

    cout<<Monday<<endl;
    cout<<Tuesday<<endl;
    return 0;
}