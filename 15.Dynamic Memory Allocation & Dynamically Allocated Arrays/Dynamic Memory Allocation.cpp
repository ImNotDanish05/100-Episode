#include <iostream>

using namespace std;

int main(){
    cout << "LMAO" << endl;

    // I dont know this is pointless, but maybe it will usefull at some part even i dont know which part lmao
    // Btw it still function with string, double, etc, im just too lazy to write it all lmao
    int* age = new int;
    // You can put number for putting the varible like this -> new int(244)
    cout << age << endl;
    cout << *age << endl; // Broken
    *age = 843;
    cout << *age << endl; // Nice
    // Basically on the top its same like this but the different it is on the variable and memory allocation
    int variable;
    cout << &variable << endl;
    cout << variable << endl;

    //string is also work the same thing
    string* name = new string;
    string* user = new string("Danish is handsome");
    cout << *user << endl;
    cout << *name << endl;

    // Deleting (its only work for pointers, for variabble yes or no because maybe the Visual Code issue lol)
    delete age;
    cout << *age << endl;
    cout << age << endl;
    // delete &variable;
    cout << variable << endl;
    cout << &variable << endl;


    return 0;
}