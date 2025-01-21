
#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows for the star pattern

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            cout << "*"; // Print star
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
