#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int num1, num2, sum;

    // Asking for input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculating sum
    sum = num1 + num2;

    // Displaying the result
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
