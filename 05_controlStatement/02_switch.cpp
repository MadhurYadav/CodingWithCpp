/*

switch (expression) {
    case value_1:
        // statements_1;
        break;
    case value_2:
        // statements_2;
        break;
    .....
    .....
    default:
        // default_statements;
        break;
}

!RULES
The case value must be either int or char type.
There can be any number of cases.
No duplicate case values are allowed.
Each statement of the case can have a break statement. It is optional.
The default Statement is also optional.

*/

#include <iostream>
using namespace std;
int main() {
    char x = 'C';

    switch (x)
    {
    case 'A':
        /* code */
        cout<<"A";
        break;

    case 'B':
        /* code */
        cout<<"B";
        break;
    
    default:
        cout<<"NONE";
        break;
    }
    return 0;
}