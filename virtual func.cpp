#include <iostream>
using namespace std;

// Base class Shape with a virtual draw() function
class Shape {
public:
    virtual void draw() const {
        cout << "Drawing Shape" << endl;
    }
    virtual ~Shape() {}
};

// Derived class Circle from Shape
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class Rectangle from Shape
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived class Triangle from Shape
class Triangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Triangle" << endl;
    }
};

// Function that takes a Shape pointer and calls its draw() method
void drawShape(const Shape* shape) {
    shape->draw();
}

int main() {
    // Create instances of derived classes
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    // Demonstrate polymorphism
    drawShape(&circle);      // Output: Drawing Circle
    drawShape(&rectangle);   // Output: Drawing Rectangle
    drawShape(&triangle);    // Output: Drawing Triangle

    return 0;
}
