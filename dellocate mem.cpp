#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student() : name(""), age(0) {}

    // Function to set student details
    void setDetails(const string& name, int age) {
        this->name = name;
        this->age = age;
    }

    // Function to display student details
    void displayDetails() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Function to deallocate the memory used by the dynamically allocated array
void deallocateMemory(Student* students) {
    delete[] students;
}

int main() {
    int numStudents;

    // Get the number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Create an array of Student objects dynamically
    Student* students = new Student[numStudents];

    // Set the details of each student
    for (int i = 0; i < numStudents; ++i) {
        string name;
        int age;
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        students[i].setDetails(name, age);
    }

    // Display the details of each student
    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayDetails();
    }

    // Deallocate the memory
    deallocateMemory(students);

    return 0;
}
