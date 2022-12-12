// Abelgas_Kale_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float num1 = 0;
    float num2 = 0;
    cout << "Enter the first number\n";
    cin >> num1;
    cout << "Enter the second number\n";
    cin >> num2;

    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = num1 / num2;

    cout << "Sum:" << sum << "\n";
    cout << "Difference:" << difference << "\n";
    cout << "Product:" << product << "\n";
    cout << "Quotient:" << quotient << "\n";
}
