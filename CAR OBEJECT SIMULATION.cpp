#include <iostream>
#include <string>
using namespace std;

// 1. Define a class named Car.
class Car {
public:
    // 2. Public data members
    string brand;
    string model;
    float price;
    int mileage;

    // 3. Constructor to initialize data members
    Car(string carBrand, string carModel, float carPrice, int carMileage) {
        brand = carBrand;
        model = carModel;
        price = carPrice;
        mileage = carMileage;
    }

    // 4. Member function to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // 5. Member function to simulate driving
    void drive(int distance) {
        mileage += distance;
        cout << "You drove " << distance << " miles. Updated mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // 6. Create a Car object with specified details
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // 7. Display car details
    myCar.display();

    // 8. Simulate driving the car for 150 miles
    myCar.drive(150);

    // 9. Simulate driving the car for 300 miles
    myCar.drive(300);

    return 0;
}
