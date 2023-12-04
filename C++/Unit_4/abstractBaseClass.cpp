#include <iostream>
using namespace std;
// Abstract Base Class
class Shape
{
public:
    // Pure virtual function makes this class abstract
    virtual void calculateArea() const = 0;
    // Regular member function
    void display() const
		{
        cout << "This is a shape." << endl;
    }
};
// Derived class Circle
class Circle : public Shape
{
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    // Implementation of the pure virtual function
    void calculateArea() const override
		{
        double area = 3.14159 * radius * radius;
        cout << "Area of the circle: " << area << endl;
    }
};
// Derived class Rectangle
class Rectangle : public Shape
{
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    // Implementation of the pure virtual function
    void calculateArea() const override
		{
        double area = length * width;
        cout << "Area of the rectangle: " << area << endl;
    }
};

int main()
{
    // Shape shape; // This line would cause an error since Shape is an abstract class
    Circle circle(5.0);
    circle.display();
    circle.calculateArea();
    Rectangle rectangle(4.0, 6.0);
    rectangle.display();
    rectangle.calculateArea();
    return 0;
}