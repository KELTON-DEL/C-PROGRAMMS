#include <iostream>

#define X 2  // Number of layers
#define Y 2  // Number of rows
#define Z 2  // Number of columns

using namespace std;

int main() {
    int arr[X][Y][Z];
    
    // Taking input from user
    cout << "Enter " << X * Y * Z << " elements for the 3D array:\n";
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                cout << "Element at (" << i << ", " << j << ", " << k << "): ";
                cin >> arr[i][j][k];
            }
        }
    }
    
    // Displaying the 3D array
    cout << "\nThe 3D array elements are:\n";
    for (int i = 0; i < X; i++) {
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}
