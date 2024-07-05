#include <iostream>
using namespace std;

// Abstract base class Animal with a pure virtual function makeSound()
class Animal {
public:
    virtual void makeSound() const = 0; // Pure virtual function
    virtual ~Animal() {} // Virtual destructor
};

// Concrete class Cat inheriting from Animal
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Meow" << endl;
    }
};

// Concrete class Dog inheriting from Animal
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof" << endl;
    }
};

// Concrete class Cow inheriting from Animal
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "Moo" << endl;
    }
};

// Function that takes an Animal reference and calls makeSound()
void playAnimalSound(const Animal& animal) {
    animal.makeSound();
}

int main() {
    // Create instances of derived classes
    Cat cat;
    Dog dog;
    Cow cow;

    // Demonstrate runtime polymorphism by passing different animals to playAnimalSound
    playAnimalSound(cat);  // Output: Meow
    playAnimalSound(dog);  // Output: Woof
    playAnimalSound(cow);  // Output: Moo

    return 0;
}
