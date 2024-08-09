#include <iostream>

using namespace std;

void bl(){
    cout << " " << endl;
    cout << "==========" << endl;
    cout << " " << endl;
}

int main(){
    // NULL (NOT RECOMENDED Because KodySimpson said that this is count as integer, so may will be error in a few program)
    // nullptr (Same function as NULL, but recomended because it's not an integer and will be less error)
    int Lmao = 354;
    int* Test1 = &Lmao; // Have memory address
    int* Test2 = NULL; // This one doesnt
    int* Test3 = nullptr; // Same but less error than NULL
    cout << Test1 << endl;
    cout << Test2 << endl;
    cout << Test3 << endl;
    cout << &Test2 << endl; // They have because Test1 until Test3 is basically a variable lol

    // Pointers to Arrays
    // Arrays is like variable[] = {fue,efef,efef} thingy
    int Arrays[] = {1,35,46,35,23};
    int* MD_Arrays = Arrays;
    bl();
    // Arrays can also automaticly showing a memory address. But u still can also use &
    cout << Arrays << endl;
    cout << &Arrays << endl;
    cout << MD_Arrays << endl;
    // We can also pull out the input
    cout << *MD_Arrays << endl;
    
    // How to get a number from an array
    bl();
    cout << *Arrays << endl;
    cout << *MD_Arrays << endl;
    cout << *Arrays + 1 << endl; // the wrong one, it will just add 1 to the first array
    cout << *(MD_Arrays + 1) << endl;
    cout << *(Arrays + 2) << endl;
    cout << Arrays[3] << endl;
    cout << Arrays[0] << endl;

    bl();
    MD_Arrays++;
    cout << *MD_Arrays << endl;
    MD_Arrays--;
    cout << *MD_Arrays << endl;
    MD_Arrays = MD_Arrays +3;
    cout << *MD_Arrays << endl;
    MD_Arrays = MD_Arrays - 100;
    cout << *MD_Arrays << endl;
    
    //
    int Character[] = { 1, 3, 4, 5, 6, 7};
    int* Test = Character;
    cout << Character << Character + 3 << endl;
    // This will check by the higher rank from the Memory Address
    cout << Character << " " << Character + 3 << endl;
    if (Character < (Character + 3)){
        cout << "True" << endl;
    } else{cout << "False" << endl;}
    if (Test > (Test + 3)){
        cout << "True" << endl;
    } else{cout << "False" << endl;}
    // It will check from the number
    cout << Character[0] << " " << Character[0] + 3 << endl;
    if (Character[0] < (Character[0] + 3)){
        cout << "True" << endl;
    } else{cout << "False" << endl;}
    bl();
    return 0;
}