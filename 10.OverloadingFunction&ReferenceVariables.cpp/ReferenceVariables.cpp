#include <iostream>
using namespace std;

void CoolNumber(int &n1){
    n1 = n1 * 3;
}

void Looping (int Lmao[]){
    for (int i = 0 ; i < 10 ; i++){
        Lmao[i] = Lmao[i] *5;}
}

int main(){
    cout << "Work" << endl;
    // cap can't have a same integer inside and outside
    int n1 = 10;
    int Lmao[] = {1,2,3,4,5,6,7,8,9,10};
    CoolNumber(n1);
    Looping(Lmao);
    for (int i = 0 ; i < 10 ; i++){
        cout << Lmao[i] << endl;}
    cout << n1 << endl;
    return 0;
}