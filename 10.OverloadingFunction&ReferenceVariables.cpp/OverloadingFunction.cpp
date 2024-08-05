#include <iostream>
using namespace std;

int math1(int n1, int n2){
    int result = n1 + n2;
    return result;
}
string math1 (string s1){
    string result = s1 + " Lmao";
    return result;
}

int math1 (int n1){
    int result = 12;
    return result;
}

void void1 (int n3){
    cout << "This is void 1" << endl;
}

void void1 (string n4){
    cout << "This is void 2" << endl;
}

int main(){
    cout << "Day 10!!!" << endl;
    cout << math1(1,1) << endl;
    cout << math1("XD") << endl;
    cout << math1(1) << endl;
    void1(9384);
    void1("3435");
    return 0;
}