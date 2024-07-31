#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Days 4 of 100 Days Challenge of learning code" << endl << endl;

    // Constants
    const double PI = 22 / 7.0;  // Use 7.0 for floating-point division
    int radius = 10;
    float area = PI * radius * radius;
    cout << area << endl << endl << endl;

    // Enumerations
    enum Subscriber {
        Bobby, Beast, Kontang, Babiayam, Udin
    };

    // Array of strings corresponding to the enum values
    string subscriberNames[] = {"Bobby", "Beast", "Kontang", "Babiayam", "Udin"};

    // Example usage
    Subscriber sub1 = Subscriber(2);
    cout << subscriberNames[sub1] << endl;

    return 0;
}
