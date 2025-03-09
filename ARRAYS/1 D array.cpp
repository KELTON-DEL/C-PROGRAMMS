#include <iostream>

#define SIZE 5  // Define the size of the array using a macro

int main() {
    int arr[5];

    // User input for array elements
    std::cout << "Enter " << SIZE << " elements:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
    }

    // Display the elements
    std::cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;
    return 0;
}
