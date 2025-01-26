#include <iostream>
#include <cmath>
using namespace std;

// Function declaration
double calculateCylinderVolume(double radius, double height);

int main() {
    double radius, height, volume;

    // Prompting user for input
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Call the function to calculate the volume
    volume = calculateCylinderVolume(radius, height);

    // Display the result
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}

// Function definition
double calculateCylinderVolume(double radius, double height) {
    const double PI = 3.142;
    return PI * pow(radius, 2) * height;
}
