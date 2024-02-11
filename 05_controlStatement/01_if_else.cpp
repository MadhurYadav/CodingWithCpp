
/*

!if 

if(condition) 
{
   // Statements to execute if
   // condition is true
}

!if-else

if (condition)
{
    // Executes this block if
    // condition is true
}
else
{
    // Executes this block if
    // condition is false
}


!if-else if - else
*/

#include <iostream>
using namespace std;
int main() {

    // if
    int i = 10;
    if(i<15){
        // cout<<i;
    }

    // if-else
    if(i>15){
        // cout<<"greater";
    } else {
        // cout<<"smaller";
    }
    
    // if-else if - else
    int it = 10;
    if(it>20) cout<<"20";
    else if(it==10) cout<<"10";
    else cout<<"NONE";
    return 0;
}