#include <iostream>
using namespace std;

void TryNumber1(int* const test){ // For locking the memory access only WE CAN CHANGE THE VARIABLE INPUT
    cout << test << endl;
    int lmao = 39834344;
    cout << *test << endl;
    cout << &test << endl;
    *test = lmao;
    cout << *test << endl;
    cout << &test << endl;
}

void LockVarable(const int* lmao){ // Opposite
    //try to change the memory access
    int test = 34984;
    cout << lmao << endl;
    cout << *lmao << endl;
    lmao = &test;
    cout << lmao << endl;
    cout << *lmao << endl;

}

int main (){
    // You can send a constant to the another function
    int lmao = 3984;
    TryNumber1(&lmao);
    LockVarable(&lmao);

    return 0;
}