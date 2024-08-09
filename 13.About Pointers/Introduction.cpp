#include <iostream>

using namespace std;

void Bl(){
    cout << "===========================" << endl;
    cout << " " << endl;
}

int main(){
    // &Variable
    // This thing to check the memory address

    int Data1;
    cout << &Data1 << endl;

    // You guys can also put Memory address as a variable
    // typedata* "*" thing will automaticly make the variable to be a memory address

    int Data2;
    cout << &Data2 << endl;
    int* MemoryData_Data2 = &Data2;
    cout << MemoryData_Data2 << endl;
    
    // But MemoryData_Data2 will make new memory data that is different from Data2 because its new variable bro are u guys stupid

    cout << &MemoryData_Data2 << endl;

    // It doesn't have to be integer, u guys can use another

    bool bool1;
    Bl();
    cout << &bool1 << endl;
    bool* bool2 = &bool1;
    cout << &bool2 << endl;

    // You can also get the input variable from the memory data
    Bl();
    double Doublea = 84938;
    double* MD_DoubleA = &Doublea;
    cout << "This is a Memory Data: " << MD_DoubleA << endl;
    cout << "This is a input variable from Memory Data:" << *MD_DoubleA << endl;

    return 0;
}