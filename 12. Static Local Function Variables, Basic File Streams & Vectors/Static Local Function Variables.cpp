#include <iostream>

using namespace std;
    
void Lmao(){
    static int Hey = 11;
    Hey++;
    cout << Hey << endl;
}

int main(){
    Lmao();
    Lmao();
    Lmao();
    cout << "Day 12 :D" << endl;
    return 0;
}