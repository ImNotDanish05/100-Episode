#include <iostream>

using namespace std;

void Bl(){
    cout << " " << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    cout << " " << endl;
}

int main (){
    cout << "Lets Check how much seconds do u spend >:D " << endl;
    long double Years, Months, Days, Hours, Minutes, Seconds;
    
    cout << "Years: ";
    cin >> Years;
    cout << "Months: ";
    cin >> Months;
    cout << "Days: ";
    cin >> Days;
    cout << "Hours: ";
    cin >> Hours;
    cout << "Minutes: ";
    cin >> Minutes;
    cout << "Seconds: ";
    cin >> Seconds;
    // double Seconds[6] = {Years, Months,Days, Hours, Minutes, Seconds};
    Bl();
    cout << "Months: " << Months << " + " << Years << " x " << 12 << " = ";
    Months = Months + Years * 12;
    cout << Months << endl;

    Bl();
    cout << "Days: " << Days << " + " << Months << " x " << 30 << " = ";
    Days = Days + Months * 30;
    cout << Days << endl;

    Bl();
    cout << "Hours: " << Hours << " + " << Days << " x " << 24 << " = ";
    Hours = Hours + Days * 24;
    cout << Hours << endl;

    Bl();
    cout << "Minutes: " << Minutes << " + " << Hours << " x " << 60 << " = ";
    Minutes = Minutes + Hours * 60;
    cout << Minutes << endl;

    Bl();
    cout << "Seconds: " << Seconds << " + " << Minutes << " x " << 60 << " = ";
    Seconds = Seconds + Minutes * 60;
    cout << Seconds << endl;
    int XD;
    cin >> XD;
    return 0;
}