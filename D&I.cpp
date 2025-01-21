// Declaring and Initializing an Array in C++
// In C++, arrays are used to store multiple values of the same type in a contiguous block of memory. 
// Here's how to declare and initialize arrays:

// 1. Declaration of an Array
// The syntax to declare an array is:

// data_type array_name[array_size];

// data_type: The type of elements stored (e.g., int, float, char).
// array_name: The name of the array.
// array_size: The number of elements the array can hold (must be a constant or literal for static arrays).


// 2. Initialization of an Array
// Arrays can be initialized in several ways:

// 1. Explicit Initialization:
// int arr[5] = {1, 2, 3, 4, 5}; // Initializes all elements

// 2. Partial Initialization:
// int arr[5] = {1, 2}; // First two elements are 1 and 2, others are 0

// 3. Default Initialization:
// int arr[5] = {}; // All elements are initialized to 0

// 4. Omitting Size:
// int arr[] = {1, 2, 3, 4}; // Size automatically determined as 4


// Example: Creating and Using an Array of Integers.
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




