#include <iostream>
using namespace std;

class Beta; // Forward declaration

class Alpha {
private:
    int data;

public:
    // Constructor to initialize data
    Alpha(int value) : data(value) {}

    // Display the private data
    void display() const {
        cout << "Alpha's data: " << data << endl;
    }

    // Declare Beta as a friend class
    friend class Beta;
};

class Beta {
public:
    // Function to set Alpha's private data
    void setData(Alpha& a, int value) {
        a.data = value;
    }

    // Function to increment Alpha's private data
    void incrementData(Alpha& a) {
        a.data++;
    }

    // Function to get Alpha's private data
    int getData(const Alpha& a) const {
        return a.data;
    }
};

int main() {
    Alpha alphaObj(10); // Initialize Alpha with a value
    Beta betaObj;

    alphaObj.display(); // Output: Alpha's data: 10

    betaObj.setData(alphaObj, 20); // Set Alpha's data to 20
    alphaObj.display(); // Output: Alpha's data: 20

    betaObj.incrementData(alphaObj); // Increment Alpha's data
    alphaObj.display(); // Output: Alpha's data: 21

    int data = betaObj.getData(alphaObj); // Get Alpha's data
    cout << "Accessed Alpha's data through Beta: " << data << endl; // Output: 21

    return 0;
}
