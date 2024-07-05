#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 firstValue, T2 secondValue) : first(firstValue), second(secondValue) {}

    // Function to set the values
    void setValues(T1 firstValue, T2 secondValue) {
        first = firstValue;
        second = secondValue;
    }

    // Function to get the first value
    T1 getFirst() const {
        return first;
    }

    // Function to get the second value
    T2 getSecond() const {
        return second;
    }

    // Function to display the pair
    void display() const {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    // Demonstrate with int and double
    Pair<int, double> intDoublePair(10, 20.5);
    intDoublePair.display(); // Output: First: 10, Second: 20.5

    intDoublePair.setValues(15, 25.5);
    cout << "First: " << intDoublePair.getFirst() << ", Second: " << intDoublePair.getSecond() << endl; // Output: First: 15, Second: 25.5

    // Demonstrate with string and char
    Pair<string, char> stringCharPair("Hello", 'A');
    stringCharPair.display(); // Output: First: Hello, Second: A

    stringCharPair.setValues("World", 'B');
    cout << "First: " << stringCharPair.getFirst() << ", Second: " << stringCharPair.getSecond() << endl; // Output: First: World, Second: B

    // Demonstrate with double and bool
    Pair<double, bool> doubleBoolPair(3.14, true);
    doubleBoolPair.display(); // Output: First: 3.14, Second: 1

    doubleBoolPair.setValues(2.71, false);
    cout << "First: " << doubleBoolPair.getFirst() << ", Second: " << doubleBoolPair.getSecond() << endl; // Output: First: 2.71, Second: 0

    return 0;
}
