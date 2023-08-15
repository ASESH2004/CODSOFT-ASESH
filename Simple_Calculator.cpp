#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    std::cout << "Simple Calculator\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Cannot divide by zero.\n";
                return 1;  // Exit program with an error code
            }
            break;
        default:
            std::cout << "Invalid operation.\n";
            return 1;  // Exit program with an error code
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}