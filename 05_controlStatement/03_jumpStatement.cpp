#include <iostream>
using namespace std;
int main() {
    // continue 
    // skip when i=5 and move to i=6...
    for(int i=1; i<10; i++){
        if(i==5){
            continue;
        }
        // cout<<i<<" ";
    }

    // break
    // when i=5 it break loop and control comes out
    for(int i=1; i<10; i++){
        if(i==5){
            break;
        }
        // cout<<i<<" ";
    }

    // return 
    // terminate entire function
    for(int i=1; i<10; i++){
        if(i==5){
            // return 0;
        }
        // cout<<i<<" ";
    }

    // goto
    int var = 5;

    if(var%2 == 0) goto label1;
    else goto label2;

    label1:
        cout<<"Even"<<endl;
        return 0;
    
    label2:
        cout<<"Odd"<<endl;
    
    return 0;
}