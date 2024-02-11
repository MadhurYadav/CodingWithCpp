/*
!range based
for ( range_declaration : range_expression ) 
    loop_statement

!for_each
for_each ( InputIterator start_iter, InputIterator last_iter, Function fnc);

*/

#include <bits/stdc++.h>
using namespace std;

void printValues(int i){
    cout<<i<<" "<<endl;
}

int main() {
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {10, 20, 30, 40};

    // With refrence '&'
    for(int& val : arr1){
        val *= 2;
    }

    // Without refrence
    for(int val : arr2){
        val *= 2;
    }

    // printing

    // Arr1 value change because we used '&'
    // It directly point to exact value
    // Or gives refrence of original value
    // cout<<"Arr1: ";
    for(int val : arr1){
        // cout<<val<<" ";
    }

    // Arr2 value will not chang
    // Here we create copy of original value
    // cout<<"Arr2: ";
    for(int val : arr2){
        // cout<<val<<" ";
    }


    // for-each

    vector<int> v = {1,2,3,4};

    for_each(v.begin(), v.end(), printValues);

    return 0;
}