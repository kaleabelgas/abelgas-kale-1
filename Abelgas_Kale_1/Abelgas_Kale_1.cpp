#include <iostream>
using namespace std;

float add(float n1, float n2) {
    return n1 + n2;
}
float subtract(float n1, float n2) {
    return n1 - n2;
}
float multiply(float n1, float n2) {
    return n1 * n2;
}
float divide(float n1, float n2) {
    return n1 / n2;
}

int main()
{
    float num1 = 0;
    float num2 = 0;
    cout << "Enter the first number\n";
    cin >> num1;

    while (true) {
        cout << "Enter the second number\n";
        cin >> num2;
        if (num2 != 0) break;
        cout << "Second number must be non-zero!\n";
    }

    cout << "Sum:" << add(num1, num2) << "\n";
    cout << "Difference:" << subtract(num1, num2) << "\n";
    cout << "Product:" << multiply(num1, num2) << "\n";
    cout << "Quotient:" << divide(num1, num2) << "\n";
}