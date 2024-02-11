#include <iostream>
using namespace std;

#define pi 3.14

int main() {
    //------------
    const int name1 = 25;

    const char name2 = 'A';

    const float name3 = 15.66 ;

    // cout<<name1<<" "<<name2<<" "<<name3<<endl;

    // --------------
    // wrong way:
    // const int name4;
    // name4 = 20;

    // cout<<name4<<endl;


    // -----------

    // #define (preprocessor)
    // macros that behave like a constant
    
    cout<<pi<<endl;

    return 0;

}