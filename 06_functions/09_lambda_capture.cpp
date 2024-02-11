// [](){}
/*
capture_clause - []

    It specifies which variables from the surrounding scope are accessible inside the lambda function. 
    
    It can be empty ([]), capture all local variables by value ([=]), capture all local variables by reference ([&]), or capture specific variables.


    [&] : capture all external variables by reference 
    [=] : capture all external variables by value 
    [a, &b] : capture a by value and b by reference

    - when we capture var by value then we can't modify
    - when we capture var by refrence then we can mofify 
*/

#include <bits/stdc++.h>
using namespace std;

// printing sorted vector
void printVector(vector<int> v){
    for(const auto &element : v){
        cout<<element<<" ";
    }

    cout<<endl;
}

int main() {

    vector<int> v1 = {3,1,7,9};
    vector<int> v2 = {10,2,7,16,9};

    //  Case1: access v1 and v2 by reference

    auto pushinto = [&](int m){
        v1.push_back(m);
        v2.push_back(m);
    };

    // it pushes 20 in both v1 and v2
    pushinto(20);
    
    printVector(v1);
    printVector(v2);

    // Case2 : access v1 and v2 by copy 

    auto access = [=](int n){
        cout<<v1[n]<<endl;
        cout<<v2[n]<<endl;

        // v1[n] = n+1; // can't modify
    };

    access(4);

    // Case3 : [a, &b]
    int var1 = 10;
    int var2 = 10;

    auto mixChange = [var1, &var2](int a, int b){
        cout<<a + b<<endl;

        // modification

        // var1 = 5; // can't modify
        var2 = 5;

        cout<<var2<<endl; //5
    };

    mixChange(3,3);
    cout<<var2<<endl; //5


    return 0;
}
