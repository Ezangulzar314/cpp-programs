// patterns.cpp
#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    // Pattern 1: Square Pattern
    cout << "\nSquare Pattern:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 2: Right Triangle
    cout << "\nRight Triangle Pattern:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 3: Inverted Triangle
    cout << "\nInverted Triangle Pattern:\n";
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 4: Pyramid Pattern
    cout << "\nPyramid Pattern:\n";
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for(int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}