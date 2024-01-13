#include <iostream>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to print a message based on a condition
void printMessage(bool condition) {
    if (condition) {
        std::cout << "Condition is true!" << std::endl;
    } else {
        std::cout << "Condition is false!" << std::endl;
    }
}

int main() {
    // Declare variables
    int number1 = 5;
    int number2 = 10;
    int result = 0;

    // Perform some calculations
    result = square(number1);
    std::cout << "Square of " << number1 << " is: " << result << std::endl;

    // Find the maximum of two numbers
    result = max(number1, number2);
    std::cout << "Maximum of " << number1 << " and " << number2 << " is: " << result << std::endl;

    // Use a loop to print numbers
    for (int i = 0; i < 5; ++i) {
        std::cout << "Current iteration: " << i << std::endl;
    }

    // Call a function with a condition
    bool condition = true;
    printMessage(condition);

    // Add more lines as needed...

    return 0;
}
