#include <iostream>
using namespace std;
int main() {

    char word[7]="vivek";
    // We can declare in array itself
    // char word[7] = {'a', 'b', 'c', 'd', 'e', 'f'};  
    //OR with string directly 
    // char word[7]="abcdef";
    

    char world[7];
    // Taking char Input
    for(int i=0; i<7; i++){
        cin>>world[i];
    }

    // Printing1
    // for(int i=0; i<7; i++){
    //     cout<<world[i]<<" "<<endl;
    // }
    
    // Printing2

    // specify NULL ('\0') in conditon so that compiler will print till char and terminate when whitespace occur

    for(int i=0; world[i]!='\0'; i++){
        cout<<world[i]<<" ";
    };

    return 0;
}