#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Input two numbers
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // Display original values
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swap using a temporary variable
    temp = a; // Store the value of a in temp
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b

    // Display swapped values
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
