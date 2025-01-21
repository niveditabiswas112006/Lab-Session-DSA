#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print array elements using a loop
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Access individual elements
    cout << "The first element is: " << numbers[0] << endl;
    cout << "The last element is: " << numbers[4] << endl;

    return 0;
}
