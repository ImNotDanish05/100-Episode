#include <iostream>

using namespace std;


string* ChangeName(string* x){
    string* y = new string;
    *y = *x + " XD";
    return y;
}

int* ArrayFun(int number[], int loop){
    for (int i = 0 ; i < loop ; i++){
        number[i]++;
    }
    return number;
}

int main(){
    // Testing printf for fun
    cout << "Work LMAO" << endl;
    printf("XD\n");
    printf("XD");
    printf("XD\n");


    // Return Pointers :D

    string name = "Danish";
    string *newname = ChangeName(&name);
    cout << *newname << endl;

    // Arrays
    int Array[] = {232,335,323};
    int* PointerArray = ArrayFun(Array , 3);
    for (int i = 0 ; i < 3 ; i++){
        cout << PointerArray[i] << endl;
    }
    return 0;
}