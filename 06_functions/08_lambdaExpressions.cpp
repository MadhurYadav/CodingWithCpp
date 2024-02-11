// In C++, a lambda expression is an anonymous function or a function without a name. It allows you to define a function inline, directly within the code where it is needed. 

// Used for short snippets of code that are not going to be reused and therefore do not require a name.

/*
Syntax:
[](){}

[ capture_clause ] ( parameters ) -> return_type {
    // function body
}

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulate

using namespace std;

// when using simple function
struct MainPart {
    void operator()(int x){
        cout << x << endl;
    }
};


// printing sorted vector
void printVector(vector<int> v){
    for(const auto &element : v){
        cout<<element<<" ";
    }
}

int main() {
    vector<int> v{4, 1, 3, 5, 2, 3, 1, 7};

    // (I)
    // using function
    // MainPart mainPart; // Create an instance of the functor
    // for_each(v.begin(), v.end(), mainPart);

    // (II)
    // using lambda function
    // for_each(v.begin(), v.end(), [](int x){cout << x << endl;});

    // (III)
    // find first number greater than 4
    // find_if searches for an element for which
    // function(third argument) returns true

    // vector<int>:: iterator p; // Declaration of an iterator for a vector of integers

    // p = find_if(v.begin(), v.end(), [](int i){
    //     return i>4;
    // });
    // cout << "First number greater than 4 is : " << *p << endl;



    // (IV)
    // function to sort vector, lambda expression is for sorting in
    // non-increasing order Compiler can make out return type as bool

    // sort(v.begin(), v.end(), [](const int& a, const int& b)->bool{
    //     return a > b;
    // });

    // printing sorted vector
    // for(const auto& element : v){
    //     cout<<element<<" ";
    // }


    // (V)
    // function to count numbers greater than or equal to 5

    // int cnt = count_if(v.begin(), v.end(), [](int a){
    //     return (a>=5);
    // });

    // cout << "The number of elements greater than or equal to 5 is : "<< cnt<< endl;


    // (VI)
    // function for removing duplicate element (after sorting all
    // duplicate comes together)

    //  sort(v.begin(), v.end(), [](const int& a, const int& b)->bool{
    //     return a > b;
    // });

    // unique to remove consecutive duplicates
    // p = unique(v.begin(), v.end(), [](int a, int b){
    //     return a == b;
    // });

      

    // Erasing duplicate elements that come at the end of the vector
    // v.erase(p, v.end()); 

    // printVector(v);


    // (VII)
    // resizing vector to make size equal to total different number

    // v.resize(distance(v.begin(), p));
    // printVector(v);


    // (VIII)
    // accumulate function accumulate the container on the basis of
    // function provided as third argument
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int f = accumulate(arr, arr + 10, 1, [](int i, int j)
    // {
    //     return i * j;
    // });
 
    // cout << "Factorial of 10 is : " << f << endl;
 
    // We can also access function by storing this into variable
    // auto square = [](int i)
    // {
    //     return i * i;
    // };
 
    // cout << "Square of 5 is : " << square(5) << endl;

    return 0;
}
