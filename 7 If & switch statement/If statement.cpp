#include <iostream>
#include <string>
#include <random>

// if statement
// else statement
// else if statement


int main (){
    // using namespace std;
    std::cout << "" << std::endl;

    using namespace std;
    cout << "" << endl;

    // If statement

    string username;
    string agev;
    cout << "Please write your name: ";
    getline(cin, username);
    cout << "Your name is on our list, " << username << ". Lets go to the next question" << endl;
    cout << "Are you under 18 ?" << endl;
    cout << "Type Y for Yes" << endl << "Type N for No" << endl;
    cin >> agev;
    if (agev == "Y"){
        cout << "You can't enter because u are underage" << endl;
        return 0;
    }
    else{
        cout << "Okay you are legal" << endl;
        cout << "Please press ENTER if you want to start spinning" << endl;
        cin.ignore();
        cin.get();
        random_device randomnumber;
        mt19937 gen(randomnumber());
        uniform_int_distribution<> x(0, 9);
        int random1 = x(gen);
        int random2 = x(gen);
        int random3 = x(gen);

        cout << random1 << " " << random2 << " " << random3 << endl;
        cout << "You lose spinning" << endl;
        cin >> agev;
        return 0;
    }
    return 0;
}