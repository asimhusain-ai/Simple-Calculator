#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
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
            if (num2 == 0) {
                cout << "Error: Cannot divide by zero";
                return 0;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Error: Invalid operator";
            return 0;
    }

    cout << "Result: " << result;

    return 0;
}
