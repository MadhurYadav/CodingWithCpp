#include <iostream>
#include <limits.h>
using namespace std;

int main() {

    int size = 5;
    int arr[size] = {1, 2, 4, 5};

    // Case1: Insert at specific index

    // Slide elements from last to rightmost in arr
    // Place new element at 'kth' index

    int index = 2;

    for(int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = 3;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // {1 2 3 4 5}

    // Case2: Delete from specific index
    int deleteIndex = 1; // Element to be deleted

    for(int i = deleteIndex; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; // Reduce the size after deletion

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Case3:  Reverse Array

    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

    cout<<endl;


    // Case4: Max or Min Array
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max) max = arr[i];
    }

    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < min) min = arr[i];
    }

    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;


    // Case5: Frequency of Array Element
    int array[10] = {1,2,3,5,3,3,5,4,3,1};
    int freqElem = 3;

    int count = 0;
    for(int i=0; i<10; i++){
        if(array[i]==freqElem) count++;
    }

    cout<<"Count of 3: "<<count<<" times"<<endl;

    // Case6: Check Pair Sum
    int sum = 5;
    int pairSum[6] = {0,1,2,3,4,5};
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            if(pairSum[i] + pairSum[j] == sum){
                // Problems
                // 1- If pair is (i,i) - eg (0,0), (1,1), (2,2)... element is same/ repeating
                // 2- pair like (5,0) and (0,5) repeating
                if(pairSum[i] <= pairSum[j]) cout << pairSum[i] << "+" << pairSum[j] << "=" << sum << endl;
                else cout << pairSum[j] << "+" << pairSum[i] << "=" << sum << endl;
            }
        }
    }

    return 0;
}
