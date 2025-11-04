#include <iostream>
#include <cmath>  // for sqrt()
using namespace std;

// Function to calculate area of Right-Angled Triangle
float area(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate area of Equilateral Triangle
float area(float side) {
    return (sqrt(3) / 4) * side * side;
}

// Function to calculate area of Isosceles Triangle
float area(float base, float height, bool isIsosceles) {
    if (isIsosceles)
        return 0.5 * base * height;
    else
        return 0; // just a safeguard
}

// Main function
int main() {
    float base, height, side;

    // Right-angled triangle
    cout << "Enter base and height of Right-Angled Triangle: ";
    cin >> base >> height;
    cout << "Area of Right-Angled Triangle = " << area(base, height) << endl << endl;

    // Equilateral triangle
    cout << "Enter side of Equilateral Triangle: ";
    cin >> side;
    cout << "Area of Equilateral Triangle = " << area(side) << endl << endl;

    // Isosceles triangle
    cout << "Enter base and height of Isosceles Triangle: ";
    cin >> base >> height;
    cout << "Area of Isosceles Triangle = " << area(base, height, true) << endl;

    return 0;
}
