#include <iostream>
#define ROWS 3  // Define number of rows
#define COLS 3  // Define number of columns

using namespace std;

int main() {
    int arr[ROWS][COLS];

    // Taking input from the user
    cout << "Enter " << ROWS * COLS << " elements for the 2D array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Displaying the 2D array
    cout << "\nThe entered 2D array is:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
