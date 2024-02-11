// syntax
// storage_class var_data_type var_name

#include <iostream>
#include <thread>
using namespace std;

int globalVar;
void externStorageClass(){
    // telling the compiler that the variable
    // globalVar is an extern variable and has been
    // defined elsewhere (above the main
    // function)

    extern int globalVar;

    // cout<<globalVar<<endl; //0

    // value of extern variable modified
    globalVar = 2;
    // cout<<globalVar<<endl;
}


void autoStorageClass(){
    // Declaring an auto variable
    int a = 32;
    float b = 3.2;
    const char* c = "Learning";
    char d = 'L';

    // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}

// Function containing static variables
// memory is retained during execution
void staticStorageClass(){
    static int count = 0;
    count++;

    // cout<<count<<endl;
}

void nonStaticStorageClass(){
    int counter = 0;
    counter++;

    // cout<<counter<<endl;
}

void registerStorageClass(){
    register char b = 'G';

    // cout<<b<<endl;
}

// mutalbe storage
class Test{
    public:
        int x;

        // defining mutable variable y
        // now this can be modified
        mutable int y;

        Test(){
            x = 4;
            y = 10;
        }
};


int main() {

    autoStorageClass();

    externStorageClass();

    staticStorageClass(); //1
    staticStorageClass(); // now it starts from 1 

    nonStaticStorageClass(); //1
    nonStaticStorageClass(); // it again start from default value as it not preserve

    registerStorageClass();

    // mutalbe storage
    const Test t1;

    t1.y = 20;
    // cout<<t1.y<<endl;

    // throw error
    // t1.x = 8;
    // cout << t1.x;

