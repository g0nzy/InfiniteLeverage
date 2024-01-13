#include <iostream>
#include <vector>

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

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to generate Fibonacci series up to a certain limit
std::vector<int> generateFibonacci(int limit) {
    std::vector<int> fibonacciSeries;
    int a = 0, b = 1, temp;

    while (a <= limit) {
        fibonacciSeries.push_back(a);
        temp = a;
        a = b;
        b = temp + b;
    }

    return fibonacciSeries;
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

    // Calculate factorial of a number
    int factorialResult = factorial(5);
    std::cout << "Factorial of 5 is: " << factorialResult << std::endl;

    // Generate Fibonacci series
    std::vector<int> fibonacciSeries = generateFibonacci(50);
    std::cout << "Fibonacci series up to 50: ";
    for (int fibNum : fibonacciSeries) {
        std::cout << fibNum << " ";
    }
    std::cout << std::endl;

    // Add more lines as needed...

    return 0;
}
