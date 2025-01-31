#include <iostream>
#define PI 3.142 // Define PI constant

using namespace std;

class cylinder {
public:
    double radius;
    double height;

    // Function to calculate surface area
    double calculate_area() {
        return (2 * PI * radius * radius) + (2 * PI * radius * height);
    }

    // Function to calculate volume
    double calculate_volume() {
        return (PI * radius * radius * height);
    }
};

int main() {
    cylinder cyl; // Create an object of the cylinder class
    cyl.height = 10; // Assign value to height
    cyl.radius = 5;  // Assign value to radius

double height;
double radius;

cout<<"enter the height_"<<endl;
cin>>height;

cout<<"enter the radius_"<<endl;
cin>>radius;

    double volume, area;
    
    // Calculate volume and area using methods
    volume = cyl.calculate_volume();
    area = cyl.calculate_area();

    // Output the results
    cout << "Volume: " << volume << endl;
    cout << "Area: " << area << endl;

    return 0;
}
