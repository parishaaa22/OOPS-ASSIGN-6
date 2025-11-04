#include <iostream>
using namespace std;

// Base class
class Polygon {
protected:
    float width, height;
public:
    void set_value(float w, float h) {
        width = w;
        height = h;
    }
    virtual void calculate_area() { // virtual function for polymorphism
        cout << "Area not defined for base class\n";
    }
};

// Derived class Rectangle
class Rectangle : public Polygon {
public:
    void calculate_area() {
        cout << "Area of Rectangle = " << width * height << endl;
    }
};

// Derived class Triangle
class Triangle : public Polygon {
public:
    void calculate_area() {
        cout << "Area of Triangle = " << 0.5 * width * height << endl;
    }
};

// Main function
int main() {
    Polygon *poly;  // base class pointer
    Rectangle rect;
    Triangle tri;

    // Rectangle
    poly = &rect;
    poly->set_value(10, 5);
    poly->calculate_area();

    // Triangle
    poly = &tri;
    poly->set_value(10, 5);
    poly->calculate_area();

    return 0;
}
