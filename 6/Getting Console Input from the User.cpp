// cin 
// cin.get()
// getline(,) (with #include <string>)

#include <iostream>
#include <string>

using namespace std;

int main(){

    // getline
    string Username;
    cout << "Type your Username: ";
    getline(cin,Username);
    cout << "Your username is " + Username << endl;

    // cin
    string Password;
    cout << "Type your Password: ";
    cin >> Password;
    cout << "Your password is " + Password << endl;

    // cin.get()
    // char desc;
    // cout << "Write one word about yourself: ";
    // cin.ignore(); // For hold to not skip the cin.get(desc)
    // cin.get(desc);
    // cout << "You are: " + desc << endl;

    cout << "Press any key to continue" << endl;
    cin.ignore();
    cin.get();
    return 0;
}