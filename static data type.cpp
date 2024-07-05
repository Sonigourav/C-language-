#include <iostream>
using namespace std;

class Math {
public:
    // Static member function for addition
    static int add(int a, int b) {
        return a + b;
    }

    // Static member function for subtraction
    static int subtract(int a, int b) {
        return a - b;
    }

    // Static member function for multiplication
    static int multiply(int a, int b) {
        return a * b;
    }

    // Static member function for division
    static double divide(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return static_cast<double>(a) / b;
    }
};

int main() {
    // Demonstrate the use of static member functions without creating an object
    int a = 10, b = 5;

    cout << "Addition of " << a << " and " << b << ": " << Math::add(a, b) << endl;            // Output: 15
    cout << "Subtraction of " << b << " from " << a << ": " << Math::subtract(a, b) << endl;   // Output: 5
    cout << "Multiplication of " << a << " and " << b << ": " << Math::multiply(a, b) << endl; // Output: 50
    cout << "Division of " << a << " by " << b << ": " << Math::divide(a, b) << endl;          // Output: 2

    // Division by zero example
    cout << "Division of " << a << " by 0: " << Math::divide(a, 0) << endl;                    // Output: Error message and 0

    return 0;
}
