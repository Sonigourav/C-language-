
#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    // Constructor to initialize the dimensions of the box
    Box(double l, double b, double h) : length(l), breadth(b), height(h) {}

    // Friend function declaration
    friend double volume(const Box& b);
};

// Friend function definition
double volume(const Box& b) {
    return b.length * b.breadth * b.height;
}

int main() {
    // Create objects of Box
    Box box1(3.0, 4.0, 5.0);
    Box box2(2.0, 3.0, 4.0);

    // Use the friend function to compute their volumes
    cout << "Volume of box1: " << volume(box1) << endl; // Output: Volume of box1: 60
    cout << "Volume of box2: " << volume(box2) << endl; // Output: Volume of box2: 24

    return 0;
}
