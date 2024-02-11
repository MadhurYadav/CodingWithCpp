/*
!for

for ( initialization; test condition; updation)
{ 
     // body of for loop
}

!while

while (test_expression)
{
   // statements
 
  update_expression;
}

!do-while

do
{
   // loop body

   update_expression;
} while (test_expression);

Note: In the do-while loop, the loop body will execute at least once irrespective of the test condition. 

*/

#include <iostream>
using namespace std;
int main() {
    int size = 5;

    for(int i=0; i<=size; i++){
        // cout<<"i: "<<i<<endl;
        // cout<<"j: ";
        for(int j=i+1; j<=size; j++){
            // cout<<j<<" ";
        }
        // cout<<endl;
    }

    int test = 15;
    while(test!=0){
        // cout<<test<<endl;
        test--;
    }

    int count = 0;
    do{
        count++;
        cout<<count<<endl;
    }while(count<2);

    return 0;
}