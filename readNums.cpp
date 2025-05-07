#include <iostream>

int main() {
    int numbers[5];  // Array to store the 10 integers
    int sum = 0;      // Variable to store the sum

    // Ask the user for input
    std::cout << "Please enter 5 integers:" << std::endl;

    // Loop to take input and calculate the sum
    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter integer " << i + 1 << ": ";
        std::cin >> numbers[i];
        sum += numbers[i];
    }

    // Output the sum
    std::cout << "The sum of the 10 integers is: " << sum << std::endl;

    return 0;
}
