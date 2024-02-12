#include <iostream>
#include <vector>
using namespace std;


// Passing an Array to a Function
void printArray(int arr[]){
    cout<<"Size: "<<sizeof(arr)<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

// Return an Array from a Function
vector<int> func(){
    vector<int> arr = {1, 2, 3, 4, 5};

    return arr;
}

int main() {
    // 1D array declaration

    // Case1: Array Initialization

    // declaring array of integers
    int arr_int[5];
    // declaring array of characters
    char arr_char[5];

    // array initialization using initialier list
    int arr[5] = {10, 20, 30, 40, 50};
    printArray(arr);

    // array initialization using initializer list without
    // specifying size
    int arr1[] = { 1, 2, 3, 4, 5 };

    // array initialization using for loop
    float arr2[5];
    for(int i=0; i<5; i++){
        arr2[i] = (float)i*2.1;
    }


    // Case2: Access Array Elements

    cout<<"Element at 1st position in arr: "<<arr[0]<<endl;
    cout<<"Element at 1st position in arr: "<<arr[1]<<endl;
    cout<<"Element at 1st position in arr: "<<arr[2]<<endl;


    // Case3: Update Array Element
    arr[0] = 15;
    cout<<"Element at 1st position in arr: "<<arr[0]<<endl;

    // Case4: Array Traversal

    // printing
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Case5: Array of Characters (Strings)

    char array[6] = {'G', 'e', 'e', 'k', 's', '\0'};
    // print string

    for(int i=0; i<6; i++){
        cout<<array[i];
    }
    cout<<endl;


    // 2D Array (Matrix)
    // [row][col]

    int twoDimArr[2][3] = {10,20,30,40,50,60};
    
    // print 2d array
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<twoDimArr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // 3D Array
    int threeDimArr[2][2][2] = {10,20,30,40,50,60};

    // print 3d array

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                cout<<threeDimArr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    cout<<endl;

    // Return an Array from a Function

    vector<int> result = func();

    // print arr
    for(int i=0; i<result.size(); i++){
    cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}