#include <iostream>
using namespace std;

int main() {
    int x[3][3];

    // Input numbers into the array
    cout << "Enter 9 numbers for a 3x3 array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> x[i][j];
        }
    }

    // Display the array
    cout << "\nThe 3x3 array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << x[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

