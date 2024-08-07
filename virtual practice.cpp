#include <iostream>
#include <vector>
using namespace std;

// Base class Shape with a pure virtual function draw()
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() const override {
        cout << "circle shape drawn" << endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    void draw() const override {
        cout << "square shape drawn" << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void draw() const override {
        cout << "triangle shape drwan" << endl;
    }
};

int main() {
    // Create an array of pointers to Shape objects
    vector<Shape*> shapes;
    
    // Populate the array with instances of derived classes
    shapes.push_back(new Circle());
    shapes.push_back(new Square());
    shapes.push_back(new Triangle());
    
    // Iterate through the array and call draw() on each pointer
    for (const auto& shape : shapes) {
        shape->draw();
    }
    
    // Clean up the allocated memory
    for (auto& shape : shapes) {
        delete shape;
    }
    
    return 0;
}
