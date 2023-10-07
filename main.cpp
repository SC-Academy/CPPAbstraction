#include <iostream>

using namespace std;

// Abstract class definition
class Shape {
public:
    // Pure virtual function to define the interface
    virtual double calculateArea() const = 0;
};

// Concrete class that inherits from the abstract class
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Implementation of the abstract function
    double calculateArea() const override {
        return 3.14159265359 * radius * radius;
    }
};

// Concrete class that inherits from the abstract class
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of the abstract function
    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Using the abstract interface to calculate areas
    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;

    return 0;
}
