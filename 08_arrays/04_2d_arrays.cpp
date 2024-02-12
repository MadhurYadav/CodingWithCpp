#include <iostream>
using namespace std;
int main() {

    // Case1: Declaration
    // Syntax: datatype arrayName[rows][columns];
    // int myArray[3][4]; // Example: a 3x4 integer array

    // Case2: Initialization
    int myArray[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
    };

    // Later using loops
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            // Access and process each element, e.g., print or manipulate
            cout << myArray[i][j] << " ";
        }
        cout << endl;  // Move to the next row
    }
    cout<<endl;
  

    // Case3: Accessing Elements
    int value = myArray[1][2];  // Accesses the element in the second row and third column
    cout<<value<<endl;

    // Case4: Modification
    myArray[1][2] = 42;  // Modifies the element in the second row and third column

    // Case5: Adding two matrices (2d arrays)
    // addition of 2 matrices can possible if dimensions are same
    int arr1[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int arr2[2][3] ={
        {0,2,3},
        {7,4,3}
    };

    int result[2][3];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // printing result array
    cout<<"Addition of two matrices"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Case6: Sum of Diagonal of Matrix
    // for diagonal matrix dimension should be same
    int diagMatrix[2][2] = {
        {1,2},
        {2,1}
    };

    // diagonal sum
    int sum=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(i==j) sum += diagMatrix[i][j];
        }
    }

    cout<<"Sum: "<<sum<<endl;


    // Case7: Diagonal Matrix (Right Diag & Left Diag)

    int SUM=0;

    // for R diagonal sum
    int i=0, j=0; // For L diagonal j = N-1
    while(i<2){
        SUM += diagMatrix[i][j];
        i++;
        j++; // For L diagonal j--
    }
    cout<<"sum of diagonal: "<<SUM<<endl;


    // Case8: Upper & Lower Triangle in Matrix
    int triangularMatrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // Lower Triangle
    for(int i=0; i<3; i++){
        for(int j=0; j<=i; j++){ 
            cout<<triangularMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Upper Triangle
    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){ 
            cout<<triangularMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Case9: Transpose of Matrix

    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){ 
            int temp = triangularMatrix[i][j];
            triangularMatrix[i][j] = triangularMatrix[j][i];
            triangularMatrix[j][i] = temp;
        }
    }
    
    // printing
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<triangularMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Case10: Matrix Multiplication
    int array1[2][3]={
        {1,2,3},
        {4,5,6}
    };

    int array2[3][1]={
        {1},
        {2},
        {3}
    };

    int ansMatrix[2][1];
    for(int i=0; i<2; i++){
        for(int j=0; j<1; j++){
            ansMatrix[i][j]=0;
            for(int k=0; k<3; k++){
                ansMatrix[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    // printing
    for(int i=0; i<2; i++){
        for(int j=0; j<1; j++){
            cout<<ansMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl; 

    return 0;
}