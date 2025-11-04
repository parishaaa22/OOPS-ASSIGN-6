#include <iostream>
#include <cmath>   // for M_PI
using namespace std;

// Base class
class Shape {
public:
    virtual void area() = 0;     // pure virtual function
    virtual void display() = 0;  // pure virtual function
};

// Derived class Circle
class Circle : public Shape {
    float radius;
    float ar;
public:
    void get_data(float r) {
        radius = r;
    }
    void area() {
        ar = M_PI * radius * radius;
    }
    void display() {
        cout << "Shape: Circle" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << ar << endl << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
    float length, breadth;
    float ar;
public:
    void get_data(float l, float b) {
        length = l;
        breadth = b;
    }
    void area() {
        ar = length * breadth;
    }
    void display() {
        cout << "Shape: Rectangle" << endl;
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
        cout << "Area: " << ar << endl << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
    float base, height;
    float ar;
public:
    void get_data(float b, float h) {
        base = b;
        height = h;
    }
    void area() {
        ar = 0.5 * base * height;
    }
    void display() {
        cout << "Shape: Triangle" << endl;
        cout << "Base: " << base << ", Height: " << height << endl;
        cout << "Area: " << ar << endl << endl;
    }
};

// Main function
int main() {
    // Base class pointer
    Shape *shape;

    // Circle
    Circle c;
    c.get_data(5);
    shape = &c;
    shape->area();
    shape->display();

    // Rectangle
    Rectangle r;
    r.get_data(10, 5);
    shape = &r;
    shape->area();
    shape->display();

    // Triangle
    Triangle t;
    t.get_data(8, 4);
    shape = &t;
    shape->area();
    shape->display();

    return 0;
}
