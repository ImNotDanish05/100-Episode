#include <iostream>
using namespace std;

int PlusNumber(int n1, int n2){
    cout << "Test 1" << endl;
    int result = n1 + n2;
    return result;
}

double KomaNumber(int n3, int n4){
    double Lmao = n3 * n4;
    return Lmao;
};

void ResultNumber(int a){
    cout << a << endl;
    // return a;
};

int main(){
    cout << "100 DAYS :DDDDDDDDDDDDDD" << endl;
    cout << PlusNumber(100, 100) << endl;
    ResultNumber(199);
    cout << KomaNumber(10, 11) << endl;
    // cout <<  ResultNumber(199) << endl;
    return 0;
}

