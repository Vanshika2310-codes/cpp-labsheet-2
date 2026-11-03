#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;   
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) { radius = r; }

    double area() {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);

    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Area of Rectangle: " << rectangle.area() << endl;
    return 0;
}
