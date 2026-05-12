// matrix.cpp
#include <iostream>
using namespace std;

// Function to input matrix
void inputMatrix(int matrix[][10], int rows, int cols) {
    cout << "Enter matrix elements:\n";

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[][10], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function for matrix addition
void addMatrix(int a[][10], int b[][10], int result[][10], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function for matrix multiplication
void multiplyMatrix(int a[][10], int b[][10], int result[][10], int r1, int c1, int c2) {

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {

            result[i][j] = 0;

            for(int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {

    int a[10][10], b[10][10], result[10][10];
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "\nEnter First Matrix:\n";
    inputMatrix(a, rows, cols);

    cout << "\nEnter Second Matrix:\n";
    inputMatrix(b, rows, cols);

    cout << "\nFirst Matrix:\n";
    displayMatrix(a, rows, cols);

    cout << "\nSecond Matrix:\n";
    displayMatrix(b, rows, cols);

    // Matrix Addition
    addMatrix(a, b, result, rows, cols);

    cout << "\nAddition of Matrices:\n";
    displayMatrix(result, rows, cols);

    // Matrix Multiplication
    multiplyMatrix(a, b, result, rows, cols, cols);

    cout << "\nMultiplication of Matrices:\n";
    displayMatrix(result, rows, cols);

    return 0;
}