  /*
  
  File handling in C++ involves reading from and writing to files. It allows programs to interact with external files, such as text files, binary files, or even devices like printers. C++ provides the <fstream> header to handle file operations. File handling in C++ can be classified into two main categories: input (reading from files) and output (writing to files).


  */

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Writing to a file
    ofstream outputFile("output.txt");
    if(outputFile.is_open()){
        outputFile<<"Hello, File!";
        outputFile.close();
    }else{
        cout<<"Unable to open file for writing"<<endl;
    }


    // Reading from a file
    ifstream inputFile("output.txt");
    if(inputFile.is_open()){
        char arr[50];
        inputFile.getline(arr,50);
        cout<<arr<<" ";
        inputFile.close();
    }else{
        cout<<"Unable to open file for reading"<<endl;
    }

    return 0;
}