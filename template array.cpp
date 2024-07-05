#include <iostream>
using namespace std;

template <typename T>
class Array {
private:
    T* data;
    int size;
    int capacity;

    // Function to resize the array when needed
    void resize(int newCapacity) {
        T* temp = new T[newCapacity];
        for (int i = 0; i < size; ++i) {
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        capacity = newCapacity;
    }

public:
    // Constructor
    Array(int cap = 10) : size(0), capacity(cap) {
        data = new T[capacity];
    }

    // Destructor
    ~Array() {
        delete[] data;
    }

    // Add an element to the array
    void addElement(const T& element) {
        if (size == capacity) {
            resize(capacity * 2);
        }
        data[size++] = element;
    }

    // Remove an element from the array (if it exists)
    void removeElement(const T& element) {
        for (int i = 0; i < size; ++i) {
            if (data[i] == element) {
                for (int j = i; j < size - 1; ++j) {
                    data[j] = data[j + 1];
                }
                --size;
                return;
            }
        }
        cout << "Element not found in the array." << endl;
    }

    // Display the elements of the array
    void displayArray() const {
        cout << "[ ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    // Demonstrate with int data type
    Array<int> intArray;
    intArray.addElement(1);
    intArray.addElement(2);
    intArray.addElement(3);
    intArray.displayArray(); // Output: [ 1 2 3 ]

    intArray.removeElement(2);
    intArray.displayArray(); // Output: [ 1 3 ]

    // Demonstrate with double data type
    Array<double> doubleArray;
    doubleArray.addElement(1.1);
    doubleArray.addElement(2.2);
    doubleArray.addElement(3.3);
    doubleArray.displayArray(); // Output: [ 1.1 2.2 3.3 ]

    doubleArray.removeElement(2.2);
    doubleArray.displayArray(); // Output: [ 1.1 3.3 ]

    // Demonstrate with string data type
    Array<string> stringArray;
    stringArray.addElement("hello");
    stringArray.addElement("world");
    stringArray.addElement("!");
    stringArray.displayArray(); // Output: [ hello world ! ]

    stringArray.removeElement("world");
    stringArray.displayArray(); // Output: [ hello ! ]

    return 0;
}
